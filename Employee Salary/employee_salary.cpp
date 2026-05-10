#include<iostream>
#include<string>
using namespace std;


struct Employee {
    string name;
    int ID;
    int salary;
};


Employee highsalary(Employee employees[], int numEmployees) {
    Employee highest = employees[0]; 
    for (int i = 1; i < numEmployees; i++) {
        if (employees[i].salary > highest.salary) {
            highest = employees[i]; 
        }
    }
    return highest;
}

int main() {
    int num;

 
    cout << "Enter number of employees: ";
    cin >> num;

    Employee employees[10]; 

    
    for (int i = 0; i < num; i++) {
        cout << "Employee " << i + 1 << " Name: ";
        cin >> employees[i].name;

        cout << "Employee " << i + 1 << " ID: ";
        cin >> employees[i].ID;

        cout << "Employee " << i + 1 << " Salary: ";
        cin >> employees[i].salary;
    }

 
    Employee highestPaid = highsalary(employees, num);


    cout << "\nEmployee with the highest salary:" << endl;
    cout << "Name: " << highestPaid.name << endl;
    cout << "ID: " << highestPaid.ID << endl;
    cout << "Salary: " << highestPaid.salary << endl;

    return 0;
}

