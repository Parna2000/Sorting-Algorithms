// Selection sort algorithm
#include <stdio.h>
#include <stdlib.h>
void selectionSort(int n, int *c)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minid = i;
        for (int j = i + 1; j < n; j++)
        {
            if (c[j] < c[minid])
            {
                minid = j;
            }
        }
        if (minid != i)
        {
            int temp = c[minid];
            c[minid] = c[i];
            c[i] = temp;
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
    selectionSort(n, arr);
    printArray(n, arr);
    return 0;
}