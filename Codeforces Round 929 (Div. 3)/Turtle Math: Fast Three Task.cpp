#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    ll takenStep = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
        if (sum % 3 == 0)
        {
            if (takenStep == 0)
                takenStep = i + 1;
        }
    }
    cout << n - takenStep << endl;
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