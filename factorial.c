#include <stdio.h>
//iterative method of factorial
int iterative_fact(int n)
{  
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
       
}
//recursion method of factorial
int recursive_fact(int i){
    if(i==0)
        return 1;
    
    return i*recursive_fact(i-1);
}
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>=0){
    int iter_fact=iterative_fact(n);
    int recur_fact=recursive_fact(n);
    printf("factorial of %d is %d",n,iter_fact);
    printf("factorial of %d is %d",n,recur_fact);
    }
    else{
        printf("enter positive number:");
    }
}