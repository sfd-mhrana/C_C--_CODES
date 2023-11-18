#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    char a[21], b[21];
    scanf("%s", a);
    scanf("%s", b);

    int isP = 0;
    for (int i = 0; i < 21; i++)
    {
        if (a[i] < b[i])
        {
            printf("%s", a);
            isP = 1;
            break;
        }
        else if (a[i] > b[i])
        {
            printf("%s", b);
            isP = 1;
            break;
        }
    }

    if (!isP)
    {
        printf("%s", a);
    }

    return 0;
};