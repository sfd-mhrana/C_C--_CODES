#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Vehicle
{
public:
    int x, y;
    Vehicle()
    {
        x = 0;
        y = 0;
    }

    void moveUp()
    {
        y += 1;
    }
    void moveDown()
    {
        y -= 1;
    }
    void moveRight()
    {
        x += 1;
    }
    void moveLeft()
    {
        x -= 1;
    }
    string toString()
    {
        return "(" + to_string(x) + " , " +
               to_string(y) + ")";
    }
};

class Vehicle2010 : public Vehicle
{
public:
    void moveUpperRight()
    {
        moveUp();
        moveRight();
    }
    void moveUpperLeft()
    {
        moveUp();
        moveLeft();
    }
    void moveLowerRight()
    {
        moveDown();
        moveRight();
    }
    void moveLowerLeft()
    {
        moveDown();
        moveLeft();
    }

    string equals(Vehicle2010 car)
    {
        if (this->x == car.x && this->y == car.y)
        {
            return "True";
        }
        else
        {
            return "False";
        }
    }
};

int main()
{
    cout << "Part 1" << endl;
    cout << "------" << endl;
    Vehicle car;
    cout << car.toString() << endl;
    car.moveUp();
    cout << car.toString() << endl;
    car.moveLeft();
    cout << car.toString() << endl;
    car.moveDown();
    cout << car.toString() << endl;
    car.moveRight();
    cout << car.toString() << endl;
    cout << "------" << endl;
    cout << "Part 2" << endl;
    cout << "------" << endl;
    Vehicle2010 car1;
    cout << car1.toString() << endl;
    car1.moveLowerLeft();
    cout << car1.toString() << endl;
    Vehicle2010 car2;
    car2.moveLeft();
    cout << car2.toString() << endl;
    cout << car1.equals(car2) << endl;
    car2.moveDown();
    cout << car1.equals(car2) << endl;
    return 0;
};