#include <bits/stdc++.h>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, float i)
    { // constructor  overloading
            feet = f;
        inches = i;
    }
    void display()
    {
        cout << "Feet = " << feet << " Inches = "<<inches<<endl;
    }
    void operator++(int)
    { // post increment /postfix
            feet++;
        inches++;
    }
    Distance operator++()
    { // pre increment/
         return Distance(feet++, inches++);
    }
};

int main(){
Distance d1(8, 10.5);
Distance d2(2, 5.5);
Distance d3(7, 6.4);
cout<<"Before Increment"<<endl;
d1.display();
d2.display();
d3.display();
++d3;
++d1;
d2++;
cout<<"After increment"<<endl;
d2.display();
d1.display();
d2 = ++d1;
d2.display();
d3.display();
d1.display();
}
