#include <iostream>
#include <string>

using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;

    Item(string name, int quantity, double price) : name(name), quantity(quantity), price(price) {}

    void operator++() { quantity++; }
    void operator--() { if (quantity > 0) quantity--; }
    void operator=(const Item& other) { name = other.name; quantity = other.quantity; price = other.price; }

    void show() const {
        cout << name << ": " << quantity << " pcs, $" << price << endl;
    }
};

int main() {
    Item item1("Laptop", 10, 1500);
    Item item2("Phone", 20, 700);

    item1.show();
    item2.show();

    ++item1;  
    --item2; 

    item1.show();
    item2.show();

    item1 = item2;  
    item1.show();

    return 0;
}
