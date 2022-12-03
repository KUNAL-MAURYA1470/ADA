#include <stdio.h>
#include <string.h>
#define S 20

void display(char d[][20],char A[],int i,int j)
{
    if(i==0||j==0)
        return;
    
    if(d[i][j]=='c')
    {
        display(d,A,i-1,j-1);
        printf("%c",A[i-1]);
    }   
	else if(d[i][j]=='u')
		display(d,A,i-1,j);
	else
		display(d,A,i,j-1);
}
void LCS(char A[],char B[])
{
    
    int m,n,i,j;
    int c[S][S];
    char d[S][S];
    m=strlen(A);
    n=strlen(B);

    for(i=0;i<=m;i++)
        c[i][0]=0;
    for(i=0;i<=n;i++)
        c[0][i]=0;

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(A[i-1]==B[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                d[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                d[i][j]='u';
            }
            else{
                c[i][j]=c[i][j-1];
                d[i][j]='l';
            }
        }
    }

    printf("\n Table is..\n");
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%3d",c[i][j]);
        }
        printf("\n");
    }
    printf("\n The Longest Common Subsequese is");
    display(d,A,m,n);
}

void main()
{
    char A[S],B[S];
    printf("Enter First sequence:");
    scanf("%s",A);
    printf("Enter Second sequence:");
    scanf("%s",B);
    LCS(A,B);
}