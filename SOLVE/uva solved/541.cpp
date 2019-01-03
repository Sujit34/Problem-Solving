#include<stdio.h>
int main()
{
    int a[100][100],b[100],c[100];
    int n,k,l,sum,i,j,p,q;
   while(scanf("%d",&n)==1){k=0;l=0;
       if(n==0)
       {
           return 0;
       }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {sum=0;
        for(j=1;j<=n;j++)
        {
            sum=sum+a[i][j];
        }
        if(sum%2==1)
        {
             q=i;
            k++;
        }
    }
     for(j=1;j<=n;j++)
    {sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+a[i][j];
        }
        if(sum%2==1)
        {
             p=j;
            l++;
        }
    }
    if(k==0&&l==0)
    {
        printf("OK\n");
    }
    else if(k==1&&l==1)
    {
        printf("Change bit (%d,%d)\n",q,p);
    }
    else
    {
        printf("Corrupt\n");
    }
   }
   return 0;
}

