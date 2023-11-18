#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    float x, p;
    scanf("%f", &x);
    scanf("%f", &p);

    float a = p / (1 - x / 100);
    printf("%.2f", a);
    return 0;
};