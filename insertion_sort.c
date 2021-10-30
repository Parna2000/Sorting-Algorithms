// Selection sort algorithm
#include <stdio.h>
#include <stdlib.h>
void insertionSort(int n, int *c)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = c[i];
        j = i - 1;
        while (j >= 0 && c[j] > key)
        {
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = key;
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
    insertionSort(n, arr);
    printArray(n, arr);
    return 0;
}