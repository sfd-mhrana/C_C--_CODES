#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> g1(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> g1[i];
    }

    for (auto ir = g1.begin(); ir != g1.end(); ++ir)
    {
        if (*ir > 0)
        {
            cout << 1 << " ";
        }
        else if (*ir < 0)
        {
            cout << 2 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }

    return 0;
};