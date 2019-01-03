#include<stdio.h>
int main()
{
    int n,k,a[101],i,p,t=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a[k-1];
    for(i=0;i<n;i++)
    {
        if((a[i]>p||a[i]==p)&&a[i]>0)
        {
            t++;
        }
    }
    printf("%d\n",t);
}
