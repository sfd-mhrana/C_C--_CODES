#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool find = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i;
            find = true;
            break;
        }
    }
    if (!find)
    {
        cout << -1;
    }
    return 0;
};