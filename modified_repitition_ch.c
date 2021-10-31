#include <stdio.h>
#include <stdlib.h>
void merge(int low, int high, int mid,int* c)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    int b[100];
    while (i <= mid && j <= high)
    {
        if (c[i] < c[j])
        {
            b[k] = c[i];
            k++;
            i++;
        }
        if (c[j] < c[i])
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
void mergeSort(int low, int high,int arr[])
{
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(low, mid,arr);
        mergeSort(mid + 1, high,arr);
        merge(low, high, mid,arr);
    }
}
int check(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    int arr[100];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(0, n - 1,arr);
    if (check(n, arr))
    {
        printf("Repetition is there!!\n");
    }
    else
    {
        printf("No repitition is there!!\n");
    }
}