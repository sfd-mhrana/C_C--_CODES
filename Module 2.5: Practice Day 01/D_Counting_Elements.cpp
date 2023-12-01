#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int c = 0;
    for (auto ir = v.begin(); ir != v.end(); ++ir)
    {
        int val = *ir;
        if (find(v.begin(), v.end(), val + 1)!= v.end())
        {
            c++;
        }
    }
    cout << c;

    return 0;
};