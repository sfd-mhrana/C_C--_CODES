#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll subE = 0;
    ll subO = 0;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        if (t % 2 == 0)
        {
            subO++;
        }
        else
        {
            subE++;
        }
    }

    if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ll dif = abs(subE - subO);
        cout << dif / 2 << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};