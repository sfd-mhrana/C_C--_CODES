#include <stdio.h>
#include <string.h>
#define ll long long

ll print(ll arr[], ll n)
{
    if (n>=0)
    {
        return arr[n] += print(arr, n - 1);
    }
    return 0;
}

int main()
{
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    ll value = print(arr, n - 1);
    printf("%lld", value);
    return 0;
};