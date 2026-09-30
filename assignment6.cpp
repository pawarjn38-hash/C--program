#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

    static int count;   // Static data member

public:
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        count++;
    }

    static void showCount()   // Static member function
    {
        cout << "Number of students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1(1, "Aditya");
    Student s2(2, "Rahul");
    Student s3(3, "Amit");

    Student::showCount();

    return 0;
}