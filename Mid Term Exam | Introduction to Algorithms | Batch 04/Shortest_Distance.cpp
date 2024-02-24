#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ll n, e;
    cin >> n >> e;
    ll adj[n + 1][n + 1];
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            adj[i][j] = 1e18;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c < adj[a][b])
        {
            adj[a][b] = c;
        }
    }
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {

                ll v = adj[i][k] + adj[k][j];
                if (v < adj[i][j])
                {
                    adj[i][j] = v;
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (adj[x][y] == 1e18)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << adj[x][y] << endl;
        }
    }

    return 0;
};