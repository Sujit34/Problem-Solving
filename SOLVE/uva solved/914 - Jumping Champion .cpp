#include<stdio.h>
#include<math.h>
#include<string.h>
int prime[1000001],arr[78499],count[115],diff[1000001];
int main()
{
int i,j,m=0,a,b,l,u,max,number,ans,test,t;
for(i=2;i<=1000000;i++)
{ if(i%2==0)
prime[i]=1; }
for(i=3;i<=sqrt(1000000)+1;i+=2)
{ if(prime[i]!=1)
{ for(j=i*i;j<=1000000;j+=2*i)
 { prime[j]=1;
 }
}
}
prime[2]=0;
for(i=2;i<=1000000;i++)
{
if(prime[i]!=1)
arr[m++]=i;
}
scanf("%d",&test);
 while(test--)
{ scanf("%d%d",&a,&b);
 if(a<b)
{
l=a;
 u=b;
}
else
{
l=b;
 u=a;
}
for(i=0;i<m;i++)
{ if(arr[i]>=l)
{ a=i; break;
}
}
max=number=0;
memset(count,0,sizeof(count));
for(i=a;i<m;i++)
{ if(arr[i]>u)break;
else
{
number++;
 } }
if(number<2)
{ printf("No jumping champion\n");
continue; }
for(i=a+1;i<m;i++)
{ if(arr[i]>u)
break;
diff[i]=arr[i]-arr[i-1];
count[diff[i]]++;
if(max<count[diff[i]])
 { max=count[diff[i]];
ans=diff[i]; } }
 number=0;
 for(i=0;i<=114;i++)
{ if(max==count[i])
 number++; }
if(number>=2)
{ printf("No jumping champion\n");
continue; }
 else
 { printf("The jumping champion is %d\n",ans);
}
 }
 return 0; }
