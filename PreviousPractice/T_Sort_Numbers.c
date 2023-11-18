#include <stdio.h>
#include <string.h>
#define ll long long

void swap(ll *a, ll *b)
{
    ll temp = *a;
    *a = *b;
    *b = temp;
}

void printSort(ll a,ll b,ll c){
    if (a > b)
    {
        swap(&a, &b);
    }

    if (a > c)
    {
        swap(&a, &c);
    }

    if (b > c)
    {
        swap(&b, &c);
    }

    printf("%lld\n", a);
    printf("%lld\n", b);
    printf("%lld\n\n", c);
}

int main()
{
    ll a, b, c;
    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &c);
    printSort(a,b,c);
    printf("%lld\n", a);
    printf("%lld\n", b);
    printf("%lld", c);

    return 0;
};