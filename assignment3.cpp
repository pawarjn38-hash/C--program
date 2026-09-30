#include <iostream>
using namespace std;

class Product
{
private:
    int productId;
    string productName;
    float price;
    int sales[12];

public:
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter monthly sales for 12 months:\n";
        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> sales[i];
        }
    }

    int totalQuantity()
    {
        int total = 0;

        for (int i = 0; i < 12; i++)
            total += sales[i];

        return total;
    }

    float totalBill()
    {
        return totalQuantity() * price;
    }

    void display()
    {
        cout << "\nProduct ID: " << productId;
        cout << "\nProduct Name: " << productName;
        cout << "\nPrice: " << price;
        cout << "\nTotal Quantity Sold: " << totalQuantity();
        cout << "\nTotal Bill: " << totalBill() << endl;
    }
};

int main()
{
    Product p[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        p[i].accept();
    }

    cout << "\n===== PRODUCT DETAILS =====\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nProduct " << i + 1 << ":";
        p[i].display();
    }

    return 0;
}