#include<stdio.h>
int main()
{
int t,n,a,b,i,d,e;
while(scanf("%d",&t)==1)
{for(i=1;i<=t;i++)
{scanf("%d%d%d",&n,&a,&b);
d=a+b;
if(d>n)
{
d=d-n;
printf("Case %d: %d\n",i,d);}
else
printf("Case %d: %d\n",i,d);
}}
return 0;
}

