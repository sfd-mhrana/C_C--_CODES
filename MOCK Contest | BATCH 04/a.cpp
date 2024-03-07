#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int open = 0, close = 0;

    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        if (a == '(')
            open++;
        else
            close++;
    }
    if (open == close)
    {
        cout << "Possible" << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
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