#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll getPow(ll num, ll n)
{
    if (n == 1)
    {
        return num;
    }
    else
    {
        return num * getPow(num, n - 1);
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    ll sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum += getPow(x, i);
    }

    cout << sum;

    return 0;
};