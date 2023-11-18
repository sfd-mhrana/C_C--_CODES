#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    char a[1000001];
    fgets(a, 1000001, stdin);

    ll sum=0;
    for (ll i=0;i<strlen(a);i++)
    {
        sum+=(a[i]-'0');
    }

    printf("%lld",sum);

    return 0;
};