/*logic--
check the number is prime?
if prime thn result is 0;
else
both decrease and increase the number 1 by 1 and check using loop if prime get thn break and substruct the numbers
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
# define max 1299710
int prm[max];
int main()
{int i,j,k,l=0,n,p,q,s,t;

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
while(scanf("%d",&n)==1){

if(n==0)
{
    return 0;
}
else
{

if(prm[n]!=0)
{
p=n;
q=n;
for(i=p-1;i>=0;i--)
{
 if(prm[i]==0)
{
    s=i;
    break;
}
}
for(i=p+1;i<=1299710;i++)
{
    if(prm[i]==0)
{
    t=i;
    break;
}
}
printf("%d\n",t-s);
}
else
{

printf("0\n");

}
}
}
return 0;
}

