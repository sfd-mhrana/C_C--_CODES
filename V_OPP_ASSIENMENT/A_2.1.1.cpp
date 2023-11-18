#include <iostream>
using namespace std;

class Rectangle
{
private:
    double height;
    double width;
    double length;

public:
    Rectangle() {}

    Rectangle(double h, double w, double l) : height(h), width(w), length(l) {}

    void setDimensions(double h, double w, double l)
    {
        height = h;
        width = w;
        length = l;
    }

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
    Rectangle rect;
    double h, w, l;

    cout << "Enter height, width, and length: ";
    cin >> h >> w >> l;

    rect.setDimensions(h, w, l);

    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Volume: " << rect.calculateVolume() << endl;

    return 0;
}
