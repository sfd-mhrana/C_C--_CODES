#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll m;
    cin >> m;
    vector<ll> w(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    ll x;
    cin >> x;

    v.insert(v.begin() + x, w.begin(), w.end());

    for (auto ir = v.begin(); ir != v.end(); ++ir)
    {
        int val = *ir;
        cout << val << " ";
    }
    return 0;
};