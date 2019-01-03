#include<stdio.h>
#include<string.h>
#include<math.h>
# define max  1048578
int prm[max];
int main()
{int i,j,count=0,arr,n;
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
for(i=4;i<max;i++)
{
    if(prm[i]!=0)
    {
        for(j=i*2;j<max;j=j+i)
        {
            prm[j]=0;
        }
    }
}



while(scanf("%d",&n)==1)
{
    count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr);
        if(prm[arr]!=0)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
return 0;
}
