#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Function defined inside the class
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // Functions declared inside, defined outside
    float area();
    float perimeter();
    void display();
};

// Function definitions outside the class
float Rectangle::area()
{
    return length * breadth;
}

float Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

void Rectangle::display()
{
    cout << "\nArea = " << area() << endl;
    cout << "Perimeter = " << perimeter() << endl;
}

int main()
{
    Rectangle r;

    r.getData();
    r.display();

    return 0;
}