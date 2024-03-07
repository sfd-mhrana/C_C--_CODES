#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    set<ll> have;

    ll big = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a > n)
        {
            k--;
            big++;
        }
        else
        {
            have.insert(a);
        }
    }

    ll dup = n - have.size() - big;
    if (dup <= k)
    {
        cout << "YES"
             << "\n";
    }
    else
        cout << "NO"
             << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};