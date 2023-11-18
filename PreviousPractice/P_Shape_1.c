#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
};