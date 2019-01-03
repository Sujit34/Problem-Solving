#include<stdio.h>
int main()
{
    int n,p[101],q[101],t=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&p[i],&q[i]);
    }
    for(i=0;i<n;i++)
    {
        if(q[i]-p[i]>1)
        {
            t++;
        }
    }
    printf("%d\n",t);
}
