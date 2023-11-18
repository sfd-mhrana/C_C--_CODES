#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                swap(ar[i], ar[j]);
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout <<ar[i]<<" ";
    }


    return 0;
};