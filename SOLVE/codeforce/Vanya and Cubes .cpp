#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum;
    scanf("%d",&n);
    for(i=1;i<10000;i++)
    {
        sum=0;
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }


        if(n<sum)
        {

            break;
        }
         count++;
         n=n-sum;
    }
    printf("%d\n",count);
}
