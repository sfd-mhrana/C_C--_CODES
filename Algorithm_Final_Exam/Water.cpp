#include <bits/stdc++.h>
using namespace std;

#define ll long long

void canDo(vector<ll> &h)
{
    priority_queue<pair<ll, ll>> pq;

    for (ll i = 0; i < h.size(); ++i)
    {
        pq.push({h[i], i});
    }

    ll mxL = pq.top().second;
    pq.pop();
    ll mxR = pq.top().second;

    if (mxL > mxR)
    {
        swap(mxL, mxR);
    }

    cout << mxL << " " << mxR << endl;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> h(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> h[i];
    }
    canDo(h);
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
}
