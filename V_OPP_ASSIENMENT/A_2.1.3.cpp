#include <iostream>
using namespace std;
class Rectangle
{
private:
    double height;
    double width;
    double length;

public:
    Rectangle(double h, double w, double l) : height(h), width(w), length(l) {}

    double calculateArea()
    {
        return length * width;
    }

    double calculateVolume()
    {
        return height * width * length;
    }
};

int main()
{
    Rectangle rect(5, 6, 7);

    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Volume: " << rect.calculateVolume() << endl;

    return 0;
}
