#include<stdio.h>
int main()
{
    int n,a[1001],b[1001],c[1001],count=0,i,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        p=a[i]+b[i]+c[i];
        if(p>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
