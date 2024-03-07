#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
}

int main()
{
    ll n, w;
    cin >> n >> w;
    priority_queue<ll> pq;
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        pq.push(--v);
    }
    ll top = pq.top();
    ll sum = (top * (top + 1)) / 2;
    if (sum < w)
    {
        cout << "Hablu" << endl;
    }
    else
    {
        cout << "Dablu" << endl;
    }

    return 0;
};