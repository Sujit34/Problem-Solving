
#include<stdio.h>
int main()
{
    int n,t,i,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        p=n/2;
        printf("%d %d\n",p,n-p);
    }
    return 0;
}
