#include<stdio.h>
int main()
{
int n,i,p,count,sum,t=1;
while(scanf("%d",&n)==1)
{if(n==0)
break;
count=0;
for(i=n;i>=1;i--)
{sum=i;
for(p=1;p<=i/2;p++){
if(i%p==0)
{sum=sum+p;}
}
if(sum==n)
{
printf("Case %d: %d\n",t,i);
count++;
break;
}}
if(count==0)
{printf("Case %d: -1\n",t);}
t++;
}
return 0;
}





