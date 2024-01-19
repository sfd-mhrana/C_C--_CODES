#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> vec;

        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            vec.push_back(k);
        }

        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());

        for (auto it = vec.begin(); it != vec.end(); ++it)
            cout << *it << ' ';
        cout << endl;
    }
    return 0;
};