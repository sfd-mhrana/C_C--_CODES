#include <stdio.h>
#include <string.h>
#define ll long long

//Task 1
//Recursive function for factorial.
int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

//Task 2
//Recursive function for fibonacci.
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

//Task 3
//Recursive function for printArray.
void printArray(int arr[], int size) {
    if (size <= 0) {
        return;
    }
    printf("%d ", arr[size - 1]);
    printArray(arr, size - 1);
}

//Task 4
//Missing in PDF.   

// Task 5
// Implement a recursive algorithm to find the m^n.
int power(int m, int n) {
    if (n == 0) {
        return 1;
    } else {
        return m * power(m, n - 1);
    }
}



//Searching and Sorting//

//Sort an array using selection sort algorithm.
void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


//Sort an array RECURSIVELY using insertion sort algorithm.
void insertionSortRecursive(int arr[], int n) {
    if (n <= 1) {
        return;
    }
    insertionSortRecursive(arr, n - 1);
    int last = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}   

//Implement binary search algorithm RECURSIVELY.
int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        }
        return binarySearch(arr, mid + 1, right, target);
    }
    return -1;
}


int main()
{

    int factorialOfNum=factorial(10);
    int fibonacciOfNum=fibonacci(10);

    int arr[5]={1,2,4,5,6};
    printArray(arr,5);
    int po=power(5,2);

    selectionSort(arr,5);
    insertionSortRecursive(arr,5);
    int isFind=binarySearch(arr,5);
    return 0;
};