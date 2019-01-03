#include<stdio.h>
int main()
{
    int t,n,m,p,q,sum,res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        p=0;q=0;res=0;
        while(n>0)
        {
            p=p*10+n%10;
            n=n/10;
        }

        while(m>0)
        {
            q=q*10+m%10;
            m=m/10;
        }

        sum=p+q;
         while(sum>0)
        {
            res=res*10+sum%10;
            sum=sum/10;
        }
        printf("%d\n",res);

    }
    return 0;
}
