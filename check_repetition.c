#include <stdio.h>
#include <stdlib.h>
int check(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
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
    int arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (check(n, arr))
    {
        printf("Repetition is there!!\n");
    }
    else
    {
        printf("No repitition is there!!\n");
    }
}