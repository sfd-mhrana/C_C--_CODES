#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int a, b;
    cin >> a >> b;
    int num = b - a;
    if (num < 0)
    {
        cout << 0;
    }
    else
    {
        cout << b - a + 1;
    }
    return 0;
};