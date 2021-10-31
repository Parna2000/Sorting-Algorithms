// Bubble sort algorithm
#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int n, int *c)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
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