#include <bits/stdc++.h>
using namespace std;

#define ll long long

int print(int n, char c)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        cout << c << " ";
        print(n - 1, c);
    }
}

void solve()
{
    int n;
    char c;
    cin >> n >> c;
    print(n, c);
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};