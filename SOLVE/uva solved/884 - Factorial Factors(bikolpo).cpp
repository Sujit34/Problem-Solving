#include<stdio.h>
#include<string.h>
#include<math.h>
int ans[1000001];
int main()
{
    int i,j,p,gap,prime[1000],count=2;
    prime[0]=2;
    prime[1]=3;
    for(i=5,gap=2;i<1000;i=i+gap,gap=6-gap)
    {
        p=1;
        for(j=2;j<=sqrt(i);j++)
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
    int n,sum=0;

        memset(ans,0,sizeof(ans));
        for(i=2;i<=1000001;i++)
        {

             p=i;
            for(j=0;j<count;j++)
            {

                while(p%prime[j]==0)
                {

                    sum=sum+1;
                    p=p/prime[j];
                }
                if(p==1)
                {
                    break;
                }
            }
            if(p>1)
            {

                sum=sum+1;
            }
            ans[i]=sum;
        }
        while(scanf("%d",&n)==1)
        {
            printf("%d\n",ans[n]);
        }


}
