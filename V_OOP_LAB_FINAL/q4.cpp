#include <iostream>
using namespace std;

class Test {
private:
    int value;

public:
    // Constructor to display a message when an object is created
    Test() {
        cout << "An object has been created" << endl;
    }

    // Method to get value for the object
    void getValue() {
        cout << "Enter object value: ";
        cin >> value;
    }

    // Overloading the '+' operator to perform addition of Test objects
    void operator+(const Test& other) const {
        int sum = value + other.value;
        cout << "The addition is: " << sum << endl;
    }
};

int main() {
    Test obj1, obj2;

    cout << "Enter 1st object value: ";
    obj1.getValue();

    cout << "Enter 2nd object value: ";
    obj2.getValue();

    obj1 + obj2; // Perform addition using overloaded '+' operator

    return 0;
}
