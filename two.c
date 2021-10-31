// count the number of votes recieved by each candidate and find out who wins the election
#include<stdio.h>
#include<stdlib.h>
void buubleSort(int n,int arr[]){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
}
int dstinct(int n,int arr[]){
    int count=0;
    if(arr[0]){
        count=1;
    }
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[i-1]){
            count++;
        }
    }
    return count;
}
int max(int n,int arr[]){
    int narr[n];
    int j=1;
    narr[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[i-1]){
            narr[j]=arr[i];
        }
    }
    
}
int main(){
    int n;
    printf("Enter the length of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    buubleSort(n,arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
}