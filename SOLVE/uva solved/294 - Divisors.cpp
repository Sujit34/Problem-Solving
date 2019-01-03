#include<stdio.h>
#include<string.h>
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
    int m,p,q,o,an,count;

    while(scanf("%d",&m)==1)
    {
        for(t=1;t<=m;t++)
        {
            o=0;
            scanf("%d %d",&p,&q);
            for(i=p;i<=q;i++)
            {
                n=i;
                int sum=1;
                for(j=0;j<l;j++)
                {
                    count=0;
                    while(n%prime[j]==0)
                    {
                        count++;
                        n=n/prime[j];
                    }
                    sum=sum*(count+1);
                    if(n==1)
                    {
                        break;
                    }
                }
                if(n>1)
                {
                    sum=sum*2;
                }


                if(sum>o)
                {
                    o=sum;
                    an=i;
                }
            }
            printf("Between %d and %d, %d has a maximum of %d divisors.\n",p,q,an,o);
        }
    }

}

