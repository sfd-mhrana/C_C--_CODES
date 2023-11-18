#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char a[100];
        scanf("%s", a);

        int size = strlen(a);
        if (size <= 10)
        {
            printf("%s\n", a);
        }
        else
        {
            printf("%c", a[0]);
            printf("%d", size - 2);
            printf("%c\n", a[size - 1]);
        }
    }

    return 0;
};