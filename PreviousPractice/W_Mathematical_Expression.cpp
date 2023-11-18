#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
    {
        if (a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    else
    {
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }
    return 0;
};