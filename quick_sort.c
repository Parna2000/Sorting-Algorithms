// QuickSort algorithm
// Selection sort algorithm
#include <stdio.h>
#include <stdlib.h>
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int *c, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(c, low, high);
        quickSort(c, low, partitionIndex - 1);
        quickSort(c, partitionIndex + 1, high);
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
    quickSort(arr, 0, n - 1);
    printArray(n, arr);
    return 0;
}