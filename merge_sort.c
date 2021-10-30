// Selection sort algorithm
#include <stdio.h>
#include <stdlib.h>
void merge(int low, int high, int mid, int *c)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[100];
    while (i <= mid && j <= high)
    {
        if (c[i] < c[j])
        {
            b[k] = c[i];
            k++;
            i++;
        }
        if (c[i] > c[j])
        {
            b[k] = c[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = c[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = c[j];
        k++;
        j++;
    }
    for (int p = low; p <= high; p++)
    {
        c[p] = b[p];
    }
}
void mergeSort(int low, int high, int arr[])
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(low, mid, arr);
        mergeSort(mid + 1, high, arr);
        merge(low, high, mid, arr);
    }
}
void printArray(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the length of the array:\n");
    scanf("%d", &n);
    int arr[20];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(0, n - 1, arr);
    printArray(n, arr);
    return 0;
}