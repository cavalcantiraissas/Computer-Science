/*
Federal University of Mato Grosso
Course: Programming II || List 03
Student: Raissa Caroline Cavalcanti da Silva
*/

#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <algorithm>

struct User {
    std::string name;
    std::vector<std::weak_ptr<User>> dependencies;
    std::unique_ptr<int> exclusiveResource;

    User(const std::string& name) : name(name), exclusiveResource(nullptr) {}
};

std::vector<std::shared_ptr<User>> users;

std::shared_ptr<User> findUser(const std::string& name) {
    auto it = std::find_if(users.begin(), users.end(), [&name](const std::shared_ptr<User>& user) {
        return user->name == name;
    });
    return (it != users.end()) ? *it : nullptr;
}

void addUser(const std::string& name) {
    if (findUser(name) != nullptr) {
        std::cout << "User '" << name << "' already exists.\n";
        return;
    }
    users.push_back(std::make_shared<User>(name));
    std::cout << "User '" << name << "' added.\n";
}

void addDependency(const std::string& userName, const std::string& dependencyName) {
    auto user = findUser(userName);
    auto dependency = findUser(dependencyName);

    if (!user) {
        std::cout << "User '" << userName << "' not found.\n";
        return;
    }
    if (!dependency) {
        std::cout << "Dependency '" << dependencyName << "' not found.\n";
        return;
    }

    // Check if the dependency already exists
    for (const auto& weakDep : user->dependencies) {
        if (auto dep = weakDep.lock()) {
            if (dep->name == dependencyName) {
                std::cout << "User '" << dependencyName << "' is already a dependency of '" << userName << "'.\n";
                return;
            }
        }
    }

    user->dependencies.push_back(dependency);
    std::cout << "User '" << dependencyName << "' added as a dependency of '" << userName << "'.\n";
}

void listDependencies(const std::string& userName) {
    auto user = findUser(userName);

    if (!user) {
        std::cout << "User '" << userName << "' not found.\n";
        return;
    }

    std::cout << "Dependencies of '" << userName << "':\n";
    for (const auto& weakDep : user->dependencies) {
        if (auto dep = weakDep.lock()) {
            std::cout << "- " << dep->name << "\n";
        }
    }
}

void assignExclusiveResource(const std::string& userName, int value) {
    auto user = findUser(userName);

    if (!user) {
        std::cout << "User '" << userName << "' not found.\n";
        return;
    }

    user->exclusiveResource = std::unique_ptr<int>(new int(value));
    std::cout << "Exclusive resource of '" << userName << "' assigned with value: " << value << ".\n";
}

int main() {
    addUser("Alice");
    addUser("Bob");
    addUser("Carol");

    addDependency("Alice", "Bob");
    addDependency("Alice", "Carol");

    assignExclusiveResource("Alice", 42);

    listDependencies("Alice");
    listDependencies("Bob");

    return 0;
}
