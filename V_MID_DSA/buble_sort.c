#include <stdio.h>
#include <string.h>
#define ll long long

// Incremental Swap. Compare Current Item And Swap Booth.
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[10] = {10, 2, 1, 3, 5, 4, 6, 7, 9, 8};
    bubbleSort(arr, 10);
    return 0;
};