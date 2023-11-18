#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    ll n, m;
    scanf("%lld", &n);
    scanf("%lld", &m);
    ll arr[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    ll x;
    scanf("%lld", &x);
    int find = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (x == arr[i][j])
            {
                find = 1;
                break;
            }
        }
    }
    if (find)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
};