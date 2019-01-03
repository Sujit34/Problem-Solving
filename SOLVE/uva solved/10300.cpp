#include<stdio.h>
int main()
{
int a,b,c,d,e,f,i,sum,j;
while(scanf("%d",&e)!=EOF)
{for(j=e;j>=1;j--){
sum=0;
scanf("%d",&d);
for(i=1;i<=d;i++)
{
scanf("%d%d%d",&a,&b,&c);
f=a*c;
sum=sum+f;
}
printf("%d\n",sum);}
e--;
}
return 0;
}
