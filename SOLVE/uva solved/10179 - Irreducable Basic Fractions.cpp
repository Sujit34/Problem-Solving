#include<stdio.h>
#include<math.h>
#define max 32767

int main()
{
    int n,i,j,l=2,t,prime[4000];
    prime[0]=2;
    prime[1]=3;
    for(i=5;i<=max;i++)
    {t=1;
    for(j=2;j<=sqrt(i);j++)
    {
    if(i%j==0)
    {
    t=0;
    break;
    }
    }
    if(t==1)
    {
    prime[l++]=i;
    }
    }
    int m,p,q,o,an,count,a,u,sum1,sum2,sum3,sum;


    while(scanf("%d",&n)==1)
    {


                if(n==0)
                {
                    return 0;
                }
                sum=1;sum3=1;
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
                    for(a=1;a<=count;a++)
                    {
                        sum1=sum1*u;
                    }
                    for(a=1;a<count;a++)
                    {
                        sum2=sum2*u;

                    }
                    if(p==1)
                    {
                        sum3=sum1-sum2;
                        sum=sum*sum3;
                    }
                    if(n==1)
                    {
                        break;
                    }
                }
                if(n>1)
                {
                    sum=sum*(n-1);
                }
                printf("%d\n",sum);



            }
            return 0;
}

