#include<stdio.h>
int main()
{ int n;
long long int N,a,r,i,rev,s,t,rev1,z,q,r1,a1,z1,count;
    while(scanf("%d",&n)==1)
    {for(i=1;i<=n;i++)
{scanf("%lld",&N);
      count=1;
      read:
      rev=0;rev1=0;
       t=N;
       while(t)
           {
            r=t%10;a=t/10;t=a;
            rev=rev*10+r;}
            z=rev;
            s=N+z;q=s;
    while(q)
    {
        r1=q%10;a1=q/10;q=a1;
        rev1=rev1*10+r1;}
        z1=rev1;
if(s==z1){
   printf("%lld %lld\n",count,s);}
    else
    {N=s;
        count++;
    goto read;}}
    }
    return 0;}



