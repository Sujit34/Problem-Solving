#include<stdio.h>
#include<math.h>
#define  max 10000
int ip[10000];
int main()
{
int n,i,j,m,t;
for(i=1;i<=max;i++)
{
if(i%2==0)
ip[i]=1;
}

for ( i = 3 ; i <= sqrt(max)+1 ; i+=2 )
{
if ( ip[i] != 1 )
{
for ( j = i*i ; j <= max ; j+=2*i )
ip[j]=1;
}
}
ip[2]=0;
ip[1]=0;
scanf("%d",&t);
for(j=1;j<=t;j++){
scanf("%d",&m);
m=m/2+1;
for(i=m;i<=10000;i++)
{
if(ip[i]!=1)
{printf("%d\n",i);
break;
}
}
}
return 0;


}

