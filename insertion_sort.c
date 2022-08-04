#include <stdio.h>
//insertion sort 
void insertion_sort(int arr[],int n)
{   
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<=arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
//print program
void printarr(int arr[],int n)
{
    printf("arr elements after sorting are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void main(){
    int n;
    //enter no. of elements
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elments of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    printarr(arr,n);
}