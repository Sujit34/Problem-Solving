#include<stdio.h>
#include<string.h>
#define N 1000010
int a[N];
int b[N];
char sum[N];
int main()
{
int n,m,p,r,k,i,j,y;
while(scanf("%d",&n)==1){
while(n-->0)
{

scanf("%d",&m);
for(j=0;j<m;j++)
{
scanf("%d %d",&a[j],&b[j]);
}
r=0;k=0;
for(j=m-1;j>=0;j--)
{
p=a[j]+b[j]+r;
if(p>9)
{
sum[k]=p%10+'0';
r=p/10;
k++;
}
else
{
sum[k]=p+'0';
r=0;
k++;
}
}
for(i=k-1;i>=0;i--)
{
printf("%c",sum[i]);
}

if(n)
printf("\n\n");
else
printf("\n");


}}
return 0;
}
