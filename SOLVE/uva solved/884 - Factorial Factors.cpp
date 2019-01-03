#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 1000
int ans[1000001];
int main()
{
     int i,j,l=2,t,prime[200];
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
    int n,p,count,sum,PF;
    count=0;
    ans[0]=ans[1]=0;
        for(i=2;i<1000001;i++)
        {
            p=i;
            l=0;
            PF=prime[l++];

               while(p!=1&&PF*PF<=p)
                {

                    while(p%PF==0)
                    {
                        count++;
                    p=p/PF;
                    }

                PF=prime[l++];
                }



            if(p>1)
            {

                count++;
            }
            ans[i]=count;
        }
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",ans[n]);
    }





}

