#include  "../include/Product.h"


int main() {
    Product p1;
    cout<< "Enter product ID: ";
    cin >> p1.id;
    cout << "Enter product name: ";
    cin >> p1.name;
    cout << "Enter product price: ";
    cin >> p1.price;
    cout << "Enter product quantity: ";
    cin >> p1.quantity;
    
    cout << "\nProduct Details:" << endl;
    cout << "ID: " << p1.id << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Price: $" << p1.price << endl;
    cout << "Quantity: " << p1.quantity << endl;

    return 0;
}