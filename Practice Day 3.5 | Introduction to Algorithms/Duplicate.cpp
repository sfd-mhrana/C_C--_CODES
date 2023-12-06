#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    bool find = false;
    for (ll i = 0; i < n - 1; ++i)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "YES";
            find = true;
            break;
        }
    }
    if (!find)
    {
        cout << "NO";
    }

    return 0;
};