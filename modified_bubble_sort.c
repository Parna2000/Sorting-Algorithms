// Flagged Bubble sort algorithm to reduce the time complexity to some extent i.e. the process stops as soon as the list is sorted
#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int n, int *c)
{
    int swapped = 1;
    for (int i = 0; i < n - 1 && swapped; i++)
    {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
                swapped = 1;
            }
        }
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
    bubbleSort(n, arr);
    printArray(n, arr);
    return 0;
}