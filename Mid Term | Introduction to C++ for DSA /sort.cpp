#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    sort(arr, arr + n, greater<ll>());
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
};
