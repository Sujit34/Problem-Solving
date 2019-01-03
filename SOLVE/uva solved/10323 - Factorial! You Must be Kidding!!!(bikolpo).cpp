#include<stdio.h>


int main()
{

    long long int  n,sum,i,arr[15];
            sum=1;
            for(i=1;i<=13;i++)
            {
                sum=sum*i;
                if(i>7)
                {
                    arr[i]=sum;
                }
            }

    while(scanf("%lld",&n)==1)
    {

        if(n<0)
        {
            if(n%2==0)
            {
                printf("Underflow!\n");
            }
            else
            {
                printf("Overflow!\n");
            }
        }
        else if(n<8&&n>=0)
        {
            printf("Underflow!\n");
        }
        else if(n>13)
        {
            printf("Overflow!\n");
        }
        else
        {

            printf("%lld\n",arr[n]);
        }


    }
    return 0;
}



