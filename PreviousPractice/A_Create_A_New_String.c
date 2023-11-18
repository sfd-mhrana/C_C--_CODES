#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    char a[1001],b[1001];
    scanf("%s",a);
    scanf("%s",b);
    int sizeA = strlen(a);
    int sizeB = strlen(b);
    
    printf("%d %d\n", sizeA,sizeB);
    printf("%s %s\n", a,b);
    return 0;
};