#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];

class com
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstraOptimize(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, com> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();

        int node = parent.first;
        int cost = parent.second;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            int newCost = cost + childCost;
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
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstraOptimize(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dis[i] << endl;
    }

    return 0;
};