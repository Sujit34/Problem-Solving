#include<stdio.h>
#include<math.h>
#include<string.h>
# define max 200000000
int prm[max];
int main()
{long long int i,j,k,l=0,n;
memset(prm,0,sizeof(prm));
for(i=0;i<max;i++)
{
if(i%2==0)
prm[i]=1;
}
for(i=3;i<=sqrt(max)+1;i+=2)
{if(prm[i]!=1)
{for(j=i*i;j<=max;j+=i*2)
prm[j]=1;}
}
prm[2]=0;
while(scanf("%lld",&n)==1){
if(prm[n]!=0)
{
printf("%lld is not prime.\n",n);
}
else
{
printf("%lld is prime.\n",n);
}
}
return 0;
}
