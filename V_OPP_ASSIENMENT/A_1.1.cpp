
#include <iostream>
#include <string>
using namespace std;
class Shape
{
private:
    string shapeType;
    double param1;
    double param2;

public:
    Shape(string type, double p1, double p2) : shapeType(type), param1(p1), param2(p2) {}
    void area()
    {
        if (shapeType == "Triangle")
        {
            double area = 0.5 * param1 * param2;
            cout << "Area: " << area << endl;
        }
        else if (shapeType == "Rectangle" || shapeType == "Square")
        {
            double area = param1 * param2;
            cout << "Area: " << area << endl;
        }
        else if (shapeType == "Rhombus")
        {
            double area = 0.5 * param1 * param2;
            cout << "Area: " << area << endl;
        }
        else
        {
            cout << "Area: Shape unknown" << endl;
        }
    }
};
int main()
{
    Shape triangle("Triangle", 10, 25);
    triangle.area();
    cout << "==========================" << endl;
    Shape square("Square", 10, 10);
    square.area();
    cout << "==========================" << endl;
    Shape rhombus("Rhombus", 18, 25);
    rhombus.area();
    cout << "==========================" << endl;
    Shape rectangle("Rectangle", 15, 30);
    rectangle.area();
    cout << "==========================" << endl;
    Shape trapezium("Trapezium", 15, 30);
    trapezium.area();
    return 0;
}