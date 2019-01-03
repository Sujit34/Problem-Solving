#include<stdio.h>
int main()
{
int a[11][11],n,i,j,p,k,l,s,t=1;
while(scanf("%d",&n)==1)
{
if(n==0)
{
return 0;
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Case %d:",t++);
for(k=0,l=n-1;k<=l;k++,l--)
{

if(k==l)
{
printf(" %d\n",a[k][l]);
break;
}
s=0;
for(p=k;p<=l;p++){
s=s+a[p][k]+a[k][p]+a[l][p]+a[p][l];}
s=s-a[k][k]-a[k][l]-a[l][l]-a[l][k];

printf(" %d",s);

}
if(n%2==0){printf("\n");}


}return 0;}
