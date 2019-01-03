#include<stdio.h>
int main()
{
    long long int m,n,i,t,s,p,q,f,c,x,y,sum;
    while(scanf("%lld",&n)==1)
    {m=0;sum=0;q=1;f=1;
        if(n==-1)
        break;
       else if(n==0)
        {
            x=0,y=1;
            printf("%lld %lld\n",x,y);
        }
        else if(n>0)

           {
            for(i=1;i<=n;i++)
            {
                m=q+f-1;
                p=q;
                q=f;
                f=f+p;
                sum=q+f-1;
            }

            printf("%lld %lld\n",m,sum);}

    }
    return 0;
}

