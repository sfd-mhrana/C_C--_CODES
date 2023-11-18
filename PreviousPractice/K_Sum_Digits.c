#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    ll n;
    scanf("%lld", &n);
    char a[n + 1];
    scanf("%s", a);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {

        int temp = a[i] - 48;
        sum += temp;
    }

    printf("%lld", sum);

    return 0;
};