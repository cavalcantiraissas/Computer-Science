# User Management System with Smart Pointers in C++

This system manages users using smart pointers in C++, including `std::shared_ptr`, `std::weak_ptr`, and `std::unique_ptr`. The goal is to provide an efficient and safe way to manage memory allocation, especially when users have dependencies on each other and exclusive resources.

## Features

### 1. `Usuario` Structure

The `Usuario` structure contains:
- **name**: the user's name.
- **dependencies**: a vector of `std::weak_ptr<Usuario>`, representing the dependencies that a user has on other users. `std::weak_ptr` is used to avoid reference cycles and memory leaks.
- **exclusiveResource**: a unique pointer `std::unique_ptr<int>`, which ensures that each user has an exclusive resource associated with them.

### 2. Functions

The system provides the following functionalities for user manipulation:

- **Add a new user**: Creates a user and adds them to the system.
- **Add a dependency to an existing user**: Allows associating one user as a dependency of another user.
- **List all dependencies of a specific user**: Displays all the users that the specified user depends on.
- **Assign a value to a user's exclusive resource**: Sets an exclusive value for the user's resource.
- **Find a user by name**: Searches for a user in the system by name.

### 3. Main Program Interaction

In the main program, users can:
1. Add users.
2. Create dependencies between users.
3. Assign values to the users' exclusive resources.
4. List the dependencies of a user.

