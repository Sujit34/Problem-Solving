#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,p,t,u,k,i;
    while(scanf("%d",&n)==1)
    {for(i=1;i<=n;i++){
        scanf("%d",&p);
        a=p*567;
        b=a/9;
        c=b+7492;
        d=c*235;
        e=d/47;
        f=e-498;
        if(f<0)
        {f=-1*f;
        t=f/10;
        u=t%10;
        printf("%d\n",u);}
        else
        {t=f/10;
        u=t%10;
        printf("%d\n",u);}
        }}

    return 0;
}
