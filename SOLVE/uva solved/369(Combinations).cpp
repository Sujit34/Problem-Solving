#include<stdio.h>
int main(){
long long int n,r,m,i,res,k;
while(scanf("%lld%lld",&n,&r)==2)
{
if(n==0&&r==0)
break;
m=r;k=n;
if(n-m<m)
m=n-m;
for(i=1,res=1;i<=m;i++,k--){
res=res*k;
res=res/i;
}
printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,res);
}
return 0;
}

