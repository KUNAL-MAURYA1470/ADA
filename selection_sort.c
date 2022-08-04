#include <stdio.h>
//swap program 
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
// selection sort program
void selectionsort(int arr[],int n)
{   int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=n-1;j>=0;j--){
            if(arr[j]<arr[min])
               { min=j;
               
               }
            swap(&arr[j],&arr[min]);
            
        }
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
    selectionsort(arr,n);
    printarr(arr,n);
}