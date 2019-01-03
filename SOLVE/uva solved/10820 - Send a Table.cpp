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
    int n1,m,p,q,o,an,count,a,u,sum1,sum2,sum3,sum,res,x;


    while(scanf("%d",&n1)==1)
    {


                res=0;
                if(n1==0)
                {
                    return 0;
                }

                for(i=1;i<=n1;i++){
                    n=i;sum=1;sum3=1;
                    x=sqrt(n)+1;
                for(j=0;j<l;j++)
                {
                    if(prime[j]>x)
                    break;
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
                res=res+sum;

    }
 printf("%d\n",res*2-1);





            }
            return 0;
}

