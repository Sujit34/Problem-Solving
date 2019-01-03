#include<stdio.h>
int main()
{
    int i,a,b,n,sum;
    while(scanf("%d",&n)==1)
    {sum=0,b=1,a=0;
        if(n==0)
        return 0;
        else
        {
            for(i=1;i<=n;i++)
            {
                sum=a+b;
                a=b;
                b=sum;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}

