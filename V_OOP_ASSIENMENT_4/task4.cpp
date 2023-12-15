#include <bits/stdc++.h>
using namespace std;
class Triangle
{
private:
    int base;
    int height;

public:
    Triangle(int base, int height) : base(base), height(height) {}
    int getBase() { return base; }
    int getHeight() { return height; }

    double calcArea() { return 0.5 * base * height; }

    Triangle operator-(Triangle &other)
    {
        int newBase = max(base - other.base, 0);
        int newHeight = max(height - other.height, 0);
        return Triangle(newBase, newHeight);
    }
};

int main()
{
    Triangle t1(10, 5);
    cout << "First Triangle Base: " << t1.getBase()
         << endl;
    cout << "First Triangle Height: " << t1.getHeight()
         << endl;
    cout << "First Triangle area: " << t1.calcArea()
         << endl;
    Triangle t2(5, 3);
    cout << "Second Triangle Base: " << t2.getBase() << endl;
    cout << "Second Triangle Height: " << t2.getHeight() << endl;
    cout << "Second Triangle area: " << t2.calcArea() << endl;
    Triangle t3 = t1 - t2;
    cout << "Third Triangle Base: " << t3.getBase()
         << endl;
    cout << "Third Triangle Height: " << t3.getHeight() << endl;
    cout << "Third Triangle area: " << t3.calcArea()
         << endl;
    return 0;
}
