#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    ll v = ar[0];
    for (ll i = 1; i < n; i++)
    {
        v = max(v, ar[i]);
    }
    cout << v;

    return 0;
};