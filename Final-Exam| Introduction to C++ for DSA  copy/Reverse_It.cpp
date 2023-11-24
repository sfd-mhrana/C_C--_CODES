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
};

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].section >> ar[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        char temp;
        temp = ar[i].section;
        ar[i].section = ar[n - i - 1].section;
        ar[n - i - 1].section = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].section << " " << ar[i].id << endl;
    }
    return 0;
};