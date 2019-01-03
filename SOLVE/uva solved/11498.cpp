#include<stdio.h>
int main()
{int n,a,b,c,d,i;
while(scanf("%d",&n)==1)
{if(n==0)
{return 0;}
scanf("%d %d",&a,&b);
for(i=1;i<=n;i++)
{scanf("%d %d",&c,&d);
if(a==c||d==b)
{printf("divisa\n");}
else if(a>c&&b>d)
{printf("SO\n");}
else if(a>c&&b<d)
{printf("NO\n");}
else if(a<c&&b<d)
{printf("NE\n");}
else if(a<c&&b>d)
{printf("SE\n");}
}
}
return 0;
}

