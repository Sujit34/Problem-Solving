#include<stdio.h>
int a[100000];
int main()
{
    int n,p=0,f=0;
    while(scanf("%d",&n)==1)
    {

        if(n==42)
        f=1;
        if(f==0)
        {
            a[p]=n;
            p++;
        }

    }
    for(int i=0;i<p;i++)
    {
        printf("%d\n",a[i]);
    }
}
