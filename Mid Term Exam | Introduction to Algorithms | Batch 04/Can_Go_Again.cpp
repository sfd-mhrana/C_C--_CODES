#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Edge
{
public:
    ll u, v, c;
    Edge(ll u, ll v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const ll val = 1e18;
const ll N = 1e5 + 5;
ll dis[N];

int main()
{

    ll n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while (e--)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }

    for (ll i = 0; i < N; i++)
    {
        dis[i] = val;
    }

    ll src, t;
    cin >> src >> t;
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge edg : edgeList)
        {
            ll u, v, c;
            u = edg.u;
            v = edg.v;
            c = edg.c;

            if (dis[u] != val && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool isCycle = false;
    for (Edge edge : edgeList)
    {
        ll u, v, c;
        u = edge.u;
        v = edge.v;
        c = edge.c;

        if (dis[u] < val && dis[u] + c < dis[v])
        {
            isCycle = true;
            break;
        }
    }

    if (isCycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            ll d;
            cin >> d;
            if (dis[d] == val)
                cout << "Not Possible" << endl;
            else
                cout << dis[d] << endl;
        }
    }

    return 0;
};