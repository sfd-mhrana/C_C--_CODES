#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll minN = 1000000;
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll d = arr[i] + arr[j] + (j + 1) - (i + 1);
            minN = min({minN, d});
        }
    }
    cout << minN;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
};