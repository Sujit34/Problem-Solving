#include<stdio.h>
#include<string.h>
#define N  5000000 + 2
int fac[N];
int prime[N];
int deprime[N];
int main()
{
    int i,j,n,m,ans;
    memset(fac,0,sizeof(fac));
    prime[0]=prime[1]=1;
    for(i=2;i<N;i++)
    {
        prime[i]=0;
    }
    for(i=2;i<N;i++)
    {
        if(prime[i]==0)
        {
            fac[i]=fac[i]+i;
            for(j=2*i;j<N;j=j+i)
            {
                prime[j]=1;
                fac[j]=fac[j]+i;
            }
        }
        deprime[i]=deprime[i-1];
        if(prime[fac[i]]==0)
        {
            deprime[i]++;
        }
    }
    while(scanf("%d %d",&n,&m)==2)

    {
        if(n==0)
        {
            return 0;
        }
        ans=deprime[m]-deprime[n-1];
        printf("%d\n",ans);
    }
    return 0;
}
