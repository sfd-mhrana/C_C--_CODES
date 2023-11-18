#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    ll n;
    scanf("%lld", &n);

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                ll swp = arr[i];
                arr[i] = arr[j];
                arr[j] = swp;
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }

    return 0;
};