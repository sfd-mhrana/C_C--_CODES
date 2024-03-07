#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll maxN = 1005;
const ll maxM = 1005;
ll dp[maxN][maxM];

bool subsetSum(ll n, ll a[], ll s)
{
    if (s == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (a[n - 1] <= s)
    {
        bool op1 = subsetSum(n - 1, a, s - a[n - 1]);
        bool op2 = subsetSum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = subsetSum(n - 1, a, s);
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll marks[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    memset(dp, -1, sizeof(dp));
    if (subsetSum(n, marks, 1000 - m))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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