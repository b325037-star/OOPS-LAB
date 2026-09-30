
#include <iostream>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(Product p) {
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products are different and cannot be combined.\n";
        return *this;
    }

    bool operator>(Product p) {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main() {
    Product p1("Laptop", 50000, 2);
    Product p2("Laptop", 50000, 3);

    Product p3 = p1 + p2;

    cout << "After Addition:\n";
    p3.display();

    cout << "\nComparison:\n";

    if (p1 > p2)
        cout << "Product 1 has higher total value.";
    else if (p2 > p1)
        cout << "Product 2 has higher total value.";
    else
        cout << "Both products have equal total value.";

    return 0;
}