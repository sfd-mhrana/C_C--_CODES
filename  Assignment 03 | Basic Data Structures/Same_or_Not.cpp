#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool areStackAndQueueEqual(stack<int> &s, queue<int> &q)
{
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            return false;
        }
        s.pop();
        q.pop();
    }
    return s.empty() && q.empty();
}

int main()
{
    stack<int> sta;
    queue<int> que;

    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        sta.push(v);
    }

    for (ll i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        que.push(v);
    }
    bool k = areStackAndQueueEqual(sta, que);
    if (k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
};