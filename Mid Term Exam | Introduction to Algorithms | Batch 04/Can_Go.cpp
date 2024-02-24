#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const ll N = 1005;
vector<pair<ll, ll>> v[N];
ll dis[N];

class com
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};

void dijkstraOptimize(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, com> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();

        ll node = parent.first;
        ll cost = parent.second;

        for (pair<ll, ll> child : v[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;

            ll newCost = cost + childCost;
            if (newCost < dis[childNode])
            {
                dis[childNode] = newCost;
                pq.push({childNode, newCost});
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }

    ll src, t;
    cin >> src >> t;
    dijkstraOptimize(src);

    while (t--)
    {
        ll d, dw;
        cin >> d >> dw;
        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
};