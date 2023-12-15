#include <iostream>
using namespace std;

class Triangle {
private:
    float base;
    float height;

public:
    // Constructor
    Triangle(float b, float h) : base(b), height(h) {}

    // Getter functions
    float getBase() const { return base; }
    float getHeight() const { return height; }

    // Calculate area of the triangle
    float calcArea() const {
        return 0.5 * base * height;
    }

    // Overloading subtraction operator to find the difference of two triangles
    Triangle operator-( Triangle& other)  {
        float newBase = (base > other.base) ? base - other.base : other.base - base;
        float newHeight = (height > other.height) ? height - other.height : other.height - height;
        return Triangle(newBase, newHeight);
    }

    // Overloading multiplication operator to find a new triangle by multiplying the attributes of two triangles
    Triangle operator*( Triangle& other) const {
        float newBase = base * other.base;
        float newHeight = height * other.height;
        return Triangle(newBase, newHeight);
    }
};

int main() {
    Triangle t1(10, 5);
    cout << "First Triangle Base: " << t1.getBase() << endl;
    cout << "First Triangle Height: " << t1.getHeight() << endl;
    cout << "First Triangle area: " << t1.calcArea() << endl;

    Triangle t2(5, 3);
    cout << "Second Triangle Base: " << t2.getBase() << endl;
    cout << "Second Triangle Height: " << t2.getHeight() << endl;
    cout << "Second Triangle area: " << t2.calcArea() << endl;

    Triangle t3 = t1 - t2;
    cout << "Third Triangle Base: " << t3.getBase() << endl;
    cout << "Third Triangle Height: " << t3.getHeight() << endl;
    cout << "Third Triangle area: " << t3.calcArea() << endl;

    Triangle t4 = t3 * t1;
    cout << "Fourth Triangle Base: " << t4.getBase() << endl;
    cout << "Fourth Triangle Height: " << t4.getHeight() << endl;
    cout << "Fourth Triangle area: " << t4.calcArea() << endl;

    return 0;
}
