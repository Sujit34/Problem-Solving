#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,gap,prime[100],count=2,p;
    prime[0]=2;
    prime[1]=3;
    for(i=5,gap=2;i<100;i=i+gap,gap=6-gap)
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
    int n,ans[100],m,t;
    while(scanf("%d",&n)==1)
    {
       if(n==0)
       {
           return 0;
       }
        memset(ans,0,sizeof(ans));
        t=0;
        for(i=2;i<=n;i++)
        {
            m=i;
            for(j=0;j<count;j++)
            {
                while(m%prime[j]==0)
                {
                    ans[prime[j]]++;
                    m=m/prime[j];
                }
                if(m==1)
                {
                    break;
                }
            }
            if(m>1)
            {
                ans[m]++;
            }
        }
        printf("%3d! =",n);
        for(i=0;i<100;i++)
        {
            if(ans[i]!=0)
            {
                t++;
                if(t>15)
                {
                printf("\n%6c",' ');
                t=0;
                }


                    printf("%3d",ans[i]);



            }
        }
        printf("\n");
    }
}
