#include <stdio.h>
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void partition(int arr[],int l ,int h){
    int pivot=arr[h];
    int i=arr[l-1];

    for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      
      i++;
      
      
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  
  
  return (i + 1);

}

void quicksort(int arr,int l,int h){
    if(low<high){
        int pi=partition(arr,l,h);

        quicksort(arr,0,pi-1);
        quicksort(arr,pi+1,h);
    }

}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("/n");
}


int main(){
    int arr[]={23,46,77,100,42,39};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array:\n");
    printarray(arr,n);

    quicksort(arr,0,n-1);

    printf("sorted array:\n");
    printarray(arr,n);
    return 0;
}