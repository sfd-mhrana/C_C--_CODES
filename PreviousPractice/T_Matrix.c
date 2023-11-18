#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sumA = 0;
    int sumB = 0;

    for (int i = 0; i < n; i++)
    {
        sumA += arr[i][i];
        sumB += arr[i][n - i - 1];
    }
    if (sumA > sumB)
    {

        printf("%d", sumA - sumB);
    }
    else
    {
        printf("%d", sumB - sumA);
    }

    return 0;
};