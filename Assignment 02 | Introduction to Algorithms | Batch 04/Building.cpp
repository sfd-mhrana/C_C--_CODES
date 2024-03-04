#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int cunt = 0;
int groupSize[N];

class Edge
{
public:
    int u, v, w;

    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
void dsuInitialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}
int findLeader(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    else
    {
        int leader = findLeader(parent[node]);
        parent[node] = leader;
        return leader;
    }
}
void DSUUnion(int node1, int node2)
{
    int l1 = findLeader(node1);
    int l2 = findLeader(node2);
    if (l1 >= l2)
    {
        parent[l2] = l1;
        groupSize[l1] += groupSize[l2];
    }
    else
    {
        parent[l1] = l2;
        groupSize[l2] += groupSize[l1];
    }
}

bool com(Edge e1, Edge e2)
{
    return (e1.w < e2.w);
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<Edge> edgeList;
    dsuInitialize(v);
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }

    sort(edgeList.begin(), edgeList.end(), com);

    long long int totalCost = 0;
    for (Edge e : edgeList)
    {
        int l1 = findLeader(e.u);
        int l2 = findLeader(e.v);
        if (l1 == l2)
        {
            continue;
        }
        else
        {
            DSUUnion(e.u, e.v);
            totalCost += e.w;
            cunt++;
        }
    }

    if (cunt == v - 1)
        cout << totalCost << endl;
    else
        cout << "-1" << endl;
    return 0;
}