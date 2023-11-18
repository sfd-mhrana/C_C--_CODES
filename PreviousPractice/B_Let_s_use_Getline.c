#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    char a[1000001];
    fgets(a, 1000001, stdin);

    ll sum=0;
    for (ll i=0;<1000001;i++)
    {
        sum+=a[i];
    }

    printf("%lld",sum);

    return 0;
};