#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the length of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Choose any one of the following options:\n1.Bubble sort algorithm\n2.Insertion sort algorithm\n3.Merge sort\n4.Quick sort\n5.Count sort\n6.Selection sort\n");
    while(1){
        int choice;
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            bubblesort(n,arr);
            break;
        
        default:
            break;
        }
    }
}



