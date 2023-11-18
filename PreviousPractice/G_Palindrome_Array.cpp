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

    bool pa = true;
    for (ll i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            pa = false;
            break;
        }
    }

    if (pa)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
};