#include <stdio.h>
#include <string.h>
#define ll long long

void selectionSort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

int main()
{

    int arr[10] = {10, 5, 2, 4, 3, 6, 7, 8, 9, 1};
    selectionSort(arr, 10);
    return 0;
};