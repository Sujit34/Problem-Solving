#include<stdio.h>
int main()
{
    int t,n,i,j,l,h,a[100];
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            h=0;l=0;
            scanf("%d",&n);
            for(j=0;j<n;j++)N
            {
                scanf("%d",&a[j]);
            }
            for(j=1;j<n;j++)
            {
                if(a[j-1]<a[j])
                {
                    h++;
                }
                if(a[j-1]>a[j])
                {
                    l++;
                }
            }
            printf("Case %d: %d %d\n",i,h,l);
        }
    }
}

