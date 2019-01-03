#include<stdio.h>
int f(int n)
{if(n==1||n==2)
return n;
else
return f(n-1)+f(n-2);
}
int main()
{
int k,n;
while(scanf("%d",&n)==1)
{
if(n==0)
return 0;
k=f(n);
printf("%d\n",k);
}
return 0;
}
