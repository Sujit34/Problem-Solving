#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,prime[80000],count=2,gap,p;
    prime[0]=2;
    prime[1]=3;
    for(i=5,gap=2;i<1000000;i=i+gap,gap=6-gap)
    {
        p=1;
        for(j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            prime[count++]=i;
        }
    }
    long long int n,ans[99999],t,m;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        if(n<-1)
        {
            n=-1*n;
        }
        memset(ans,0,sizeof(ans));
        t=0;
        for(i=0;i<count;i++)
        {
           m=0;
            while(n%prime[i]==0)
            {
                m=1;
                n=n/prime[i];
            }
            if(m==1)
            {
                ans[t++]=prime[i];
            }

            if(n==1)
            {
                break;
            }
        }
        if(n>1)
        {
            ans[t++]=n;

        }

        if(t>1)
        {
            printf("%lld\n",ans[t-1]);
        }
        else
        {
            printf("-1\n");
        }

    }
    return 0;
}
