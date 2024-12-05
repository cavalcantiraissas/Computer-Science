#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
class Record {
private:
    struct Student {
        string name;
        T grade;
    };
    vector<Student> students;

public:
    void addStudent(const string& name, T grade) {
        students.push_back({name, grade});
    }

    T calculateAverage() {
        T sum = 0;
        for (const auto& student : students) {
            sum += student.grade;
        }
        return students.empty() ? 0 : sum / students.size();
    }

    void displayStudents() {
        for (const auto& student : students) {
            cout << "Name: " << student.name << ", Grade: " << student.grade << endl;
        }
    }
};

int main() {
    Record<int> intRecord;
    intRecord.addStudent("Maria", 90);
    intRecord.addStudent("João", 85);

    intRecord.displayStudents();
    cout << "Average: " << intRecord.calculateAverage() << endl;

    return 0;
}
