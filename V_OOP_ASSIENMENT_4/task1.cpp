#include <bits/stdc++.h>
using namespace std;

class Marks
{
private:
    int mark;

public:
    Marks(int m)
    {
        mark = m;
    }
    int getMark()
    {
        return mark;
    }
    Marks operator+(Marks &other)
    {
        int total = this->mark + other.mark;
        return Marks(total);
    }
};

int main()
{
    int q1, q2, lab, mid, final;
    cout << "Quiz 1 (out of 10): ";
    cin >> q1;
    cout << "Quiz 2 (out of 10): ";
    cin >> q2;
    cout << "Lab (out of 30): ";
    cin >> lab;
    cout << "Mid (out of 20): ";
    cin >> mid;
    cout << "Final (out of 30): ";
    cin >> final;

    Marks Q1(q1), Q2(q2), Lab(lab), Mid(mid), Final(final);
    Marks total = Q1 + Q2 + Lab + Mid + Final;

    cout << "Total marks: " << total.getMark() << endl;

    return 0;
}
