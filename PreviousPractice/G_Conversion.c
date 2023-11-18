#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    char a[100001];
    scanf("%s", a);
    int size = strlen(a);
    for (ll i = 0; i < size; i++)
    {
        if (a[i] == ',')
        {
            printf(" ");
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            printf("%c", a[i] - 32);
        }
        else
        {
            printf("%c", a[i] + 32);
        }
    }

    return 0;
};