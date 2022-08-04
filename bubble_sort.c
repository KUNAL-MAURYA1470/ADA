#include <stdio.h>
//bubble sort program
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                //Swap if element of current element is greater than next element
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//print program
void printarr(int arr[],int n)
{
    printf("arr elements are:\n");
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
    bubblesort(arr,n);
    printarr(arr,n);
}