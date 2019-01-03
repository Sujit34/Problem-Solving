#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 10000000
int ip[10000000];
int main()
{
    int i,j,r,n,g,t;
    memset(ip,0,sizeof(ip));
    for(i=1;i<=max;i++)
    {
        if(i%2==0)
        {
            ip[i]=1;
        }
    }
    for(i=3;i<=sqrt(max)+1;i=i+2)
    {
        if(ip[i]!=1)
        {
            for(j=i*i;j<=max;j=j+2*i)
        {
            ip[j]=1;
        }
        }

    }
    ip[2]=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        r=1;g=0;
        i=3;j=n;
        while(ip[j]!=0)
        {
            j--;
        }
        while(r!=0)
        {
            t=i+j;
            if(t==n)
            {
                printf("%d = %d + %d\n",n,i,j);
                r=0;
            }
            else if(t>n)
            {j--;
            while(ip[j]!=0)
            {
            j--;
            if(j<=0)
            {r=0;g=1;}
            }
            }
            else if(t<n)
            {
                i++;
                while(ip[i]!=0)
                {
                    i++;
                    r=1;
                }
            }
        }
        if(g==1)
         printf("Goldbach's conjecture is wrong.\n");
    }
return 0;

}

