#include<stdio.h>
int main()
{
int i=0,r,n,m,k,p,j,s;
while(scanf("%d%d",&r,&n)==2)
{
if(r==0&&n==0)
break;
else if(r==n){i++;
printf("Case %d: 0\n",i);}
else if(r<n){i++;
printf("Case %d: 0\n",i);
}
else{m=0;p=0;
i++;
for(j=1;j<=r;j++)
{
    k=(1*n);
    p=p+k;s=p+n;
    m++;
    if(s>=r)
    break;

}

if(m<=26)
printf("Case %d: %d\n",i, m);
else if(p<r)
printf("Case %d: impossible\n",i);
}}
return 0;
}



