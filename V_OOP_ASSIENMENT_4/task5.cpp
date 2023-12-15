#include <bits/stdc++.h>
using namespace std;
class Coordinates
{
private:
    int x;
    int y;

public:
    Coordinates(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX() { return x; }
    int getY() { return y; }

    Coordinates operator-(Coordinates &other)
    {
        return Coordinates(x - other.x, y - other.y);
    }

    Coordinates operator*(Coordinates &other)
    {
        return Coordinates(x * other.x, y * other.y);
    }

    bool operator==(Coordinates &other)
    {
        return x == other.x && y == other.y;
    }

    string checkEqual(Coordinates &other)
    {
        if (*this == other)
        {
            return "The calculated coordinates are the same.";
        }
        else
        {
            return "The calculated coordinates are NOT the same.";
        }
    }
};

int main()
{
    int x1, y1, x2, y2;
    cin >> x1;
    cin >> y1;
    Coordinates p1(x1, y1);
    cin >> x2;
    cin >> y2;
    Coordinates p2(x2, y2);
    Coordinates p4 = p1 - p2;
    cout << "Result of subtraction: (" << p4.getX()
         << ", " << p4.getY() << ")" << endl;
    Coordinates p5 = p1 * p2;
    cout << "Result of multiplication: (" << p5.getX()
         << ", " << p5.getY() << ")" << endl;
    string point_check = p4.checkEqual(p5);
    cout << point_check << endl;
    return 0;
}
