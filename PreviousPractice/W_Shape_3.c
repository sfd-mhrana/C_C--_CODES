#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    int n;
    scanf("%d",&n);
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= z; j++)
        {
            printf("*");
        }
        z += 2;
        printf("\n");
    }
    z -= 2;
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= z; j++)
        {
            printf("*");
        }
        z -= 2;

        printf("\n");
    }
    return 0;
};
