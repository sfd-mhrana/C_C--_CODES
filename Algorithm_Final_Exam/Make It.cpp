#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 100000;

bool check(ll n, ll cur)
{
    if (n == cur)
        return true;
    else if (n < cur)
        return false;

    return check(n, cur + 3) || check(n, cur * 2);
}

void solve()
{
    ll n;
    cin >> n;
    if (check(n, 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
};