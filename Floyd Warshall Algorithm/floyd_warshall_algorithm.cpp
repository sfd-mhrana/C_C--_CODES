#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// BFS , Dijkstra, Bellman ford all of those are single source shortest path.
// floyd warshall is the all source shortest path.

int main()
{

    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }
    for (ll k = 0; k < n; k++)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {

                ll v = adj[i][k] + adj[k][j];
                if (v < adj[i][j])
                {
                    adj[i][j] = v;
                }
            }
        }
    }

    bool cycleFound = false;
    for (ll i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            cycleFound = true;
        }
    }
    
    if (cycleFound)
    {
        cout << "Cycle Found";
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (adj[i][j] == INT_MAX)
                {
                    cout << "INF"
                         << " ";
                }
                else
                {
                    cout << adj[i][j] << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
};