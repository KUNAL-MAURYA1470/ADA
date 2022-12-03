#include <stdio.h>

void knapsack(int n,float weight[],float profit[],float capacity)
{
    float x[n],tp,u=capacity;

    for(int i=0;i<n;i++)
    {
        x[i]=0.0;
    }

    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
            break;
        else
        {
            x[i]=1.0;
            tp=tp+profit[i];
            u=u-weight[i];
        }
    }

    if(i<n){
        x[i]=u/weight[i];
        tp=tp+(x[i]*profit[i]);
    }

    printf("\nThe result vector is:- ");
   for (i = 0; i < n; i++)
      printf("%f\t", x[i]);
 
   printf("\nMaximum profit is:- %f", tp);
}


void main()
{
    int n;
    printf("Enter no.of element:");
    scanf("%d",&n);

    float weight[n],profit[n],capacity,ratio[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter weight of element-%d:",i);
        scanf("%f",&weight[i]);

        printf("Enter profit of element-%d:",i);
        scanf("%f",&profit[i]);

    }

    printf("Enter total capacity:");
    scanf("%d",&capacity);

    for(int i=0;i<n;i++);
    {
        ratio[i]=profit[i]/weight[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ratio[i]>ratio[j])
            {
                float temp =ratio[i];
                ratio[i]=ratio[j];
                ratio[j]=temp;


                temp= weight[j];
				weight[j]= weight[i];
				weight[i]= temp;

				temp= profit[j];
				profit[j]= profit[i];
				profit[i]= temp;

            }
        }
    }

    knapsack(n,weight,profit,capacity);

}