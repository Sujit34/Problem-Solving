#include<stdio.h>
int main()
{
    long long int n,p,t,q,s,tc,x,i=1;
    scanf("%lld",&tc);
    while(tc-->0){s=1;t=1;
    scanf("%lld",&n);
    x=n;
    while(t==1){p=0;
    while(s!=0)
    {
        s=n/10;
        q=n%10;
        n=s;
        p=p+q*q;
    }
    if(p==1)
    {
        printf("Case #%lld: %lld is a Happy number.\n",i++,x);
        t=0;
    }
    else if(p/10==0)
    {
        printf("Case #%lld: %lld is an Unhappy number.\n",i++,x);
        t=0;
    }
    else
    {
        n=p;
        s=1;
        t=1;
    }
    }
    }
    return 0;
}


