#include <bits/stdc++.h>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double getRadius() { return radius; }

    void setRadius(double radius)
    {
        if (radius > 0)
        {
            this->radius = radius;
        }
        else
        {
            cerr << "Error: Radius cannot be negative." << endl;
        }
    }

    double getArea()
    {
        return M_PI * pow(radius, 2);
    }

    Circle operator+(Circle &other)
    {
        double newRadius = radius+other.radius;
        return Circle(newRadius);
    }
};

int main()
{
    Circle c1(4);
    cout << "First circle radius: " << c1.getRadius() << endl;
    cout << "First circle area: " << c1.getArea()
         << endl;
    Circle c2(5);
    cout << "Second circle radius: " << c2.getRadius() << endl;
    cout << "Second circle area: " << c2.getArea() << endl;
    Circle c3 = c1 + c2;
    cout << "Third circle radius: " << c3.getRadius() << endl;
    cout << "Third circle area: " << c3.getArea()
         << endl;

    return 0;
}
