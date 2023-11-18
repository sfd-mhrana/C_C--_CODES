#include <stdio.h>
#include <string.h>
#define ll long long

void test()
{
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    ll arb[n];
    for (ll i = 0; i < n; i++)
    {
        arb[i] = arr[i];
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (arb[i] < arb[j])
            {
                ll temp = arb[i];
                arb[i] = arb[j];
                arb[j] = temp;
            }
        }
    }

    ll c[n];
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] > arb[i])
        {
            c[i] = arr[i] - arb[i];
        }
        else
        {
            c[i] = arb[i] - arr[i];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        printf("%lld ", c[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        test();
    }
    
    
    return 0;
};