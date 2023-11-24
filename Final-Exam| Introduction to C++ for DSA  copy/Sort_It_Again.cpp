#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int mathM;
    int engM;
};

bool cmp(Student a, Student b)
{
    if (a.engM < b.engM)
        return false;
    else if (a.engM > b.engM)
        return true;
    else
    {
        if (a.mathM < b.mathM)
            return false;
        else if (a.mathM > b.mathM)
            return true;
        else
        {
            if (a.id < b.id)
                return true;
            else
                return false;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].section >> ar[i].id >> ar[i].mathM >> ar[i].engM;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].section << " " << ar[i].id << " " << ar[i].mathM << " " << ar[i].engM << endl;
    }
    return 0;
};