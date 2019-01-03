#include<stdio.h>
#include<string.h>
int main()
{
    int n,p,q,a[101],b[101],c[101],i,t=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&b[i]);
    }
    memset(c,0,sizeof(c));
    for(i=0;i<p;i++)
    {
        c[a[i]]++;
    }
    for(i=0;i<q;i++)
    {
        c[b[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(c[i]==0)
        {
            printf("Oh, my keyboard!\n");
            t=1;
            break;
        }
    }
    if(t==0)
    {
        printf("I become the guy.\n");
    }


}
