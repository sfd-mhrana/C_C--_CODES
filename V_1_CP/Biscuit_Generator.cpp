#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int a, b;
    float t;
    cin >> a >> b >> t;
    int z = t + 0.5;
    int r = t / a;
    if (r > 0)
    {
        cout << r * b;
    }
    else
    {
        cout << 0;
    }
    return 0;
};