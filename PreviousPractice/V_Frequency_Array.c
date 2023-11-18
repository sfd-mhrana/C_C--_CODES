#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    ll n, m;
    scanf("%lld", &n);
    scanf("%lld", &m);
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    ll count[m];
    for (int i = 0; i < m; i++)
    {
        count[i] = 0;
    }

    for (ll i = 0; i < n; i++)
    {
        count[arr[i] - 1]++;
    }

    for (ll i = 0; i < m; i++)
    {
        printf("%lld\n", count[i]);
    }

    return 0;
};