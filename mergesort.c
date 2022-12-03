#include <stdio.h>

void merge(int arr[],int p ,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;

    int L[n1],M[n2];

    for(int i=0;i<n1;i++)
        L[i]=arr[p+i];
    for(int j=0;j<n2;j++)
        M[j]=arr[q+1+j];

    int i,j,k;
    i=0;
    j=0;
    k=p;

    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=M[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

     while(j<n2)
    {
        arr[k]=M[j];
        j++;
        k++;
    }

}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;

        mergesort(arr,l,m);
        mergesort(arr,m+1,r);

        merge(arr,l,m,r);

    }

}

void printarray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }

}


int main(){

    int arr[]={6,3,33,78,100,56}
    int size=sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,size -1);
    printf("Sorted array:\n");
    printarray(arr,size);
    return 0;
}