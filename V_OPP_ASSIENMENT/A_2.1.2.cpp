#include <iostream>
using namespace std;

class Rectangle {
private:
    double height = 0;
    double width = 0;
    double length = 0;

public:
    double calculateArea() {
        return length * width;
    }

    double calculateVolume() {
        return height * width * length;
    }
};

int main() {
    Rectangle rect;

    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Volume: " << rect.calculateVolume() << endl;

    return 0;
}
