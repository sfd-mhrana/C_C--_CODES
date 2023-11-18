#include <stdio.h>
#include <string.h>
#define ll long long

ll n;
void print(ll arr[])
{
    ll index = n - 1;
    if (index % 2 == 0)
    {
        printf("%lld ", arr[index]);
    }
    
    n--;
    if (n >= 0)
    {
        print(arr);
    }
}

int main()
{
    scanf("%lld", &n);
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    print(arr);
    return 0;
};