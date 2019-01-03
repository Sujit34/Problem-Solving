
#include<stdio.h>

int main()
{
    int a[100],i,n,T,j;
    while(scanf("%d",&T)==1)
    {for(j=1;j<=T;j++)
    {scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
           if(a[i-1]>a[i])
           {a[i]=a[i-1];}
    }
    printf("Case %d: %d\n",j,a[n-1]);
}}
return 0;}

