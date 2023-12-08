#include <stdio.h>
#include <string.h>
#define ll long long

void printArray(int arr[], int size)
{
    if (size <= 0)
    {
        return;
    }
    printf("%d ", arr[size - 1]);
    printArray(arr, size - 1);
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int value = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}
int main()
{
    nt arr[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array using Insertion Sort: ");
    printArray(arr, n);

    return 0;
};