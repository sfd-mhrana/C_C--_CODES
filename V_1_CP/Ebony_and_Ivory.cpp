#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isEquationTrue(int a, int b, int c)
{
    for (int i = 0; i <= c / a; ++i)
    {
        for (int j = 0; j <= c / b; ++j)
        {
            if (i * a + j * b == c)
            {
                cout << "Yes";
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    float n = (c * (a - 1)) / (a * (b - 1));
    float m = (c - n * b) / a;
    int left = m * a + n * b;
    if (!isEquationTrue(a, b, c))
    {
        cout << "No";
    }

    return 0;
};