#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define INF 9999
#define MIN(i, j) (((i) < (j)) ? (i) : (j))
int Making_change(int d[],int n,int N){
    int C[n+1][N+1];
    for(int i=1;i<=n;i++){
        C[i][0]=0;

    }
    for(int j=1;j<=N;j++){
        C[0][j]=INF;

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=N;j++)
        {
           
            int co=d[i-1];
            if(j<co)
            {
                C[i][j]=C[i-1][j];
            }
            else
            {
                C[i][j]=MIN(C[i-1][j],1+C[i][j-co]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=N;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return C[n][N];

    
}


void main(){
    int n;
    
    printf("Enter no. of coins:");
    scanf("%d",&n);
    int d[n];
    for(int i=0;i<n;i++){
        scanf("%d",&d[i]);
    }
    int N;
    printf("Enter a value of sum:");
    scanf("%d",&N);

    int ans=Making_change(d,n,N);
    printf("no. of coin =%d",ans);
}