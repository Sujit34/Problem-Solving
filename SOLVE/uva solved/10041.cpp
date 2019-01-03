#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
int n,a[501],T,i,j,p,k,b[501],l,count,t,sum,s;
while(scanf("%d",&T)==1)
{for(i=1;i<=T;i++)
{l=0;count=0;
scanf("%d",&n);
for(j=0;j<n;j++)
{scanf("%d",&a[j]);}
sort(a,a+j);
for(k=n-1;k>=0;k--)
{sum=0;
for(s=0;s<n;s++)
{p=a[k]-a[s];
if(p>=0){
sum=sum+p;}
else if(p<0)
{
p=p*(-1);
sum=sum+p;
}
}
b[l]=sum;
l++;
count++;}
l=l-1;
sort(b,b+l);
printf("%d\n",b[0]);
}
}
return 0;
}
