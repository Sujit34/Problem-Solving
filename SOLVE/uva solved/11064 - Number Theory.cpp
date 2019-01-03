/*logic--
result=input number-(relative prime+(divisor-1))
divisor=prime factor gular power+1 er gunfol;
ex-24=2^3*3^1
divisor=(3+1)*(1+1)=8*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 50000
int prime[max];
int main()
{
    int i,j,l=2,t;
    prime[0]=2;
    prime[1]=3;
    for(i=5;i<=max;i++)
    {
        t=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                t=0;
            }
        }
        if(t==1)
        {
            prime[l++]=i;

        }

    }
    int n,p,sum1,sum2,sum3,sum,count,u,divisor,r,res;
    while(scanf("%d",&n)==1)
    {
        r=n;
        sum=1;sum3=1;divisor=1;
        for(j=0;j<l;j++)
        {
            count=0;p=0;
            u=prime[j];
            sum1=1;
            sum2=1;
            while(n%prime[j]==0)
            {
                count++;
                n=n/prime[j];
                p=1;
            }
            for(i=1;i<=count;i++)
            {
                sum1=sum1*u;
            }

            for(i=1;i<count;i++)
            {
                sum2=sum2*u;
            }
            if(p==1)
            {
                sum3=sum1-sum2;
                sum=sum*sum3;
            }

            divisor=(count+1)*divisor;

            if(n==1)
            {
                break;
            }
        }
        if(n>1)
        {
            sum=sum*(n-1);
            divisor=divisor*2;
        }
        res=r-(sum+(divisor-1));

        printf("%d\n",res);
    }
    return 0;
}
