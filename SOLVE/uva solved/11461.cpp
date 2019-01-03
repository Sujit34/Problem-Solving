#include<stdio.h>
int main()
{int a,b,i,c,count;
while(scanf("%d%d",&a,&b))
{count=0;
for(i=a;i<=b;i++)
{if(a==0&&b==0)
break;
else{c=sqrt(i);
if(c*c==i)
count++;
}}
printf("%d\n",count);}
return 0;
}
