#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll v[n];
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    ll sum[n];
    sum[0] = v[0];
    for (ll i = 1; i < n; ++i)
    {
        sum[i] = sum[i - 1] + v[i];
    }

    for (ll i = n - 1; i >= 0; i--)
    {
        cout << sum[i] << " ";
    }
    return 0;
};