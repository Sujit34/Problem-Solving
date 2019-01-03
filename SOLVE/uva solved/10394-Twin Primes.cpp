#include<stdio.h>
#include<math.h>
# define max 20000000
int prm[max];
int a[max];
int main()
{int i,j,n,r,count=0,p;
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
prm[1]=0;
for(i=3,j=1;i<=max;i++)
{
    if(prm[i]==0&&prm[i+2]==0)
    {
        a[j++]=i;
    }
}

while(scanf("%d",&n)==1)
{
   printf("(%d, %d)\n",a[n],a[n]+2);
}
return 0;
}
