#include<stdio.h>
int main()
{
    int n,h,m,m1,i;
    char c;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {scanf("%d%c%d",&h,&c,&m);
    if(m>0)
    {
        m1=60-m;
        h=12-h;
        if(m1+m==60)
        {
            h=h-1;
        }
    }
    else
    {
        h=12-h;
        m1=m;
    }
    if(h<=0)
    {h=12+h;}
    if(h<10)
    {printf("0%d",h);}
    else
    {printf("%d",h);}
    if(m1<10)
    {printf(":0%d\n",m1);}
    else
    {printf(":%d\n",m1);}
    }}
    return 0;

}
