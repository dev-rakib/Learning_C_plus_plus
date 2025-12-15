#include <iostream>
#include <string>
using namespace std;

// ---------- ABSTRACTION ----------
class FoodOrder {
protected:
    int orderId;
    string customerName;
    int basePrice;

public:
    FoodOrder(int id, string name, int price)
        : orderId(id), customerName(name), basePrice(price) {}

    virtual double calculateTotal() = 0;   // pure virtual
    virtual void showOrder() = 0;

    virtual ~FoodOrder() {} // good practice
};

// ---------- INHERITANCE ----------
class DineInOrder : public FoodOrder {
private:
    int serviceCharge;

public:
    DineInOrder(int id, string name, int price, int charge)
        : FoodOrder(id, name, price), serviceCharge(charge) {}

    // ---------- POLYMORPHISM ----------
    double calculateTotal() override {
        return basePrice + serviceCharge;
    }

    void showOrder() override {
        cout << "Customer Name: " << customerName << endl;
        cout << "Order ID: " << orderId << endl;
        cout << "Base Price: " << basePrice << endl;
        cout << "Service Charge: " << serviceCharge << endl;
        cout << "Total Price: " << calculateTotal() << endl;
    }
};

int main() {
    // ---------- POLYMORPHISM IN ACTION ----------
    FoodOrder* order = new DineInOrder(123, "Rakib Chowdhury", 350, 120);
    order->showOrder();

    delete order;
    return 0;
}
