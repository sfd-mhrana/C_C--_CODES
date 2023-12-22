#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    int arr1[n];
    int arr2[m];
    for (ll i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        arr1[i] = v;
    }

    for (ll i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        arr2[i] = v;
    }

    for (ll i = 0; i < m; i++)
    {
        if (arr1[i] != arr2[m - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
};