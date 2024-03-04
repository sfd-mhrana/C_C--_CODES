#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int groupSize[N];

void dsuInit(int n)
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

void dsuUnion(int node1, int node2)
{
    int l1 = findLeader(node1);
    int l2 = findLeader(node2);

    if (groupSize[l1] >= groupSize[l2])
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
int main()
{
    int v, e;
    cin >> v >> e;

    int cnt = 0;
    dsuInit(v);

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leadera = findLeader(a);
        int leaderb = findLeader(b);

        if (leadera == leaderb)
        {
            cnt++;
        }
        else
        {
            dsuUnion(a, b);
        }
    }

    cout << cnt;

    return 0;
}