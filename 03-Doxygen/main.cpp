
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * @brief Represents a student and their academic details.
 */
class Student {
public:
    int rollNo;
    string name;
    float marks;

    /**
     * @brief Initializes a student object.
     * @param r Student roll number.
     * @param n Student name.
     * @param m Student marks.
     */
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }
};

/**
 * @brief Adds a new student to the student database.
 * @param students Reference to the student collection.
 */
void addStudent(vector<Student>& students) {
    int roll;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    students.push_back(Student(roll, name, marks));

    cout << "Student added successfully!\n";
}

/**
 * @brief Displays all registered students.
 * @param students Collection of registered students.
 */
void displayStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    for (const Student& s : students) {
        cout << "Roll Number: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "-------------------\n";
    }
}

/**
 * @brief Searches for a student using their roll number.
 * @param students Collection of registered students.
 * @param roll Roll number to search for.
 * @return true if the student exists, otherwise false.
 */
bool searchStudent(const vector<Student>& students, int roll) {
    for (const Student& s : students) {
        if (s.rollNo == roll) {
            cout << "Student Found!\n";
            cout << "Name: " << s.name << endl;
            cout << "Marks: " << s.marks << endl;
            return true;
        }
    }

    cout << "Student not found.\n";
    return false;
}

/**
 * @brief Calculates the average marks of all students.
 * @param students Collection of registered students.
 * @return Average marks, or 0 if no students exist.
 */
float calculateAverage(const vector<Student>& students) {
    if (students.empty()) {
        return 0;
    }

    float sum = 0;

    for (const Student& s : students) {
        sum += s.marks;
    }

    return sum / students.size();
}

/**
 * @brief Main function demonstrating the student management system.
 * @return 0 when the program terminates successfully.
 */
int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Calculate Average Marks\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            addStudent(students);
        }
        else if (choice == 2) {
            displayStudents(students);
        }
        else if (choice == 3) {
            int roll;
            cout << "Enter Roll Number: ";
            cin >> roll;
            searchStudent(students, roll);
        }
        else if (choice == 4) {
            cout << "Average Marks: "
                 << calculateAverage(students) << endl;
        }
        else if (choice == 5) {
            cout << "Exiting program.\n";
        }
        else {
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
