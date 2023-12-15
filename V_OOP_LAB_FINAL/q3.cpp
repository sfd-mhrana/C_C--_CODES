#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Generic animal sound!" << endl;
    }
};

// Derived class overriding the makeSound() method
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

// Another derived class overriding the makeSound() method
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Animal();
    Animal* animal2 = new Dog(); // Polymorphism - Dog object treated as an Animal
    Animal* animal3 = new Cat(); // Polymorphism - Cat object treated as an Animal

    animal1->makeSound(); // Calls the base class method
    animal2->makeSound(); // Calls the overridden Dog class method
    animal3->makeSound(); // Calls the overridden Cat class method

    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
