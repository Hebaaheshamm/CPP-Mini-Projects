#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};


Student search(Student students[], int numStudents, int rollNumber) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            return students[i];
        }
    }

  
    Student notFound = {"Not found", -1, -1};
    return notFound;
}

int main() {
    int num;

    cout << "Enter number of students: ";
    cin >> num;

    Student students[10]; 


    for (int i = 0; i < num; i++) {
        cout << "Student " << i + 1 << " Name: ";
        cin >> students[i].name;

        cout << "Student " << i + 1 << " Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Student " << i + 1 << " Marks: ";
        cin >> students[i].marks;
    }


    int numberToSearch;
    cout << "Enter roll number to search: ";
    cin >> numberToSearch;

    Student foundStudent = search(students, num, numberToSearch);


    if (foundStudent.rollNumber != -1) {  
        cout << "Name: " << foundStudent.name << endl;
        cout << "Marks: " << foundStudent.marks << endl;
    } else {
        cout << "Student not found." << endl;
    }

    return 0;
}

