#include<stdio.h>
int main()
{
    int n,k,sum,a,b;
    while(scanf("%d %d",&n,&k)!=EOF&&k>1)
    {
        sum=n;
        while(n>=k)
        {
            read:
            a=n/k;
            b=n%k+a;
            sum=sum+a;
            if(b/k==0)
            {printf("%d\n",sum);
            break;}
            else
            {
                n=b;
                goto read;
            }
        }
    }
    return 0;
}


