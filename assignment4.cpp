#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float salary, bonus;

public:
    // Default constructor
    Employee()
    {
        empId = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s, float b)
    {
        empId = id;
        name = n;
        salary = s;
        bonus = b;
    }

    void display()
    {
        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << salary;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << salary + bonus << endl;
    }
};

int main()
{
    // Object using default constructor
    Employee e1;

    // Object using parameterized constructor
    Employee e2(101, "Aditya", 30000, 5000);

    cout << "Default Constructor:";
    e1.display();

    cout << "\nParameterized Constructor:";
    e2.display();

    return 0;
}