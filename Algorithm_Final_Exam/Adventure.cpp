#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll maxN = 1000;
const ll maxW = 1000;
ll dp[maxN][maxW];

ll knapsack(ll n, ll weight[], ll value[], ll w)
{

    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (weight[n - 1] <= w)
    {
        ll op1 = knapsack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        ll op2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        ll op2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = op2;
    }
}

void solve()
{
    ll n, w;
    cin >> n >> w;
    ll weight[n];
    ll value[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }

    ll v = knapsack(n, weight, value, w);
    cout << v << endl;
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