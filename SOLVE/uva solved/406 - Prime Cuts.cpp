#include<stdio.h>
#include<math.h>
int ip[1000000];
int main()
{
int n,i,j,c,b[1000],t;

while(scanf("%d%d",&n,&c)==2){
    printf("%d %d:",n,c);

for(i=1;i<=n;i++)
{
if(i%2==0)
ip[i]=1;
}
for ( i = 3 ; i <= sqrt(n)+1 ; i+=2 )
{
if ( ip[i] != 1 )
{
for ( j = i*i ; j <= n ; j+=2*i )
ip[j]=1;
}
}
ip[2]=0;
ip[1]=0;
for(i=1,j=0;i<=n;i++)
{
if(ip[i]!=1)
{
b[++j]=i;

}
}

if(j%2==0)
{
c=c*2;
}
else
{
c=c*2-1;
}
if(c<j)
{
t=(j-c)/2;
}
else
{
c=j;
t=0;
}
for(i=t+1;i<=(t+c);i++)
printf(" %d",b[i]);
printf("\n\n");
}
return 0;
}
