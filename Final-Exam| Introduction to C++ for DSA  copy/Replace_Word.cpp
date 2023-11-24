#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s, x;
    cin >> s >> x;
    size_t pos = 0;
    while ((pos = s.find(x, pos)) != string::npos)
    {
        s.replace(pos, x.length(), "#");
        pos += 1;
    }
    cout<<s<<endl;
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