```cpp
#include <iostream>
using namespace std;

// Single Inheritance
class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    int rollNo;

public:
    void getStudent()
    {
        getPerson();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
    }
};


// Multilevel Inheritance
class Vehicle
{
protected:
    string brand;

public:
    void getVehicle()
    {
        cout << "Enter vehicle brand: ";
        cin >> brand;
    }

    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle
{
protected:
    string model;

public:
    void getCar()
    {
        getVehicle();
        cout << "Enter car model: ";
        cin >> model;
    }

    void displayCar()
    {
        displayVehicle();
        cout << "Model: " << model << endl;
    }
};

class SportsCar : public Car
{
private:
    int speed;

public:
    void getSportsCar()
    {
        getCar();
        cout << "Enter maximum speed: ";
        cin >> speed;
    }

    void displaySportsCar()
    {
        displayCar();
        cout << "Maximum Speed: " << speed << " km/h" << endl;
    }
};


int main()
{
    // Single Inheritance
    cout << "----- Single Inheritance -----" << endl;

    Student s;
    s.getStudent();

    cout << "\nStudent Details:" << endl;
    s.displayStudent();


    // Multilevel Inheritance
    cout << "\n----- Multilevel Inheritance -----" << endl;

    SportsCar sc;
    sc.getSportsCar();

    cout << "\nSports Car Details:" << endl;
    sc.displaySportsCar();

    return 0;
}
```

### Inheritance used

**Single inheritance:**

```text
Person
   ↓
Student
```

**Multilevel inheritance:**

```text
Vehicle
   ↓
Car
   ↓
SportsCar
```

This program demonstrates how a derived class can access the members/functions of its parent class and, in multilevel inheritance, inherit through multiple levels.
