#include<stdio.h>
#include<iostream>
#include<algorithm>
int main()
{
    int n,a[100001],i,p=0,q=0,r=0,t=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            p++;
        }
        if(a[i]==2)
        {
            q++;
        }
        if(a[i]==3)
        {
            r++;
        }
        if(a[i]==4)
        {
            t++;
        }
    }
    p=p-r;

    if(q%2==1)
    {
        if(p>0)
        {
            p=p-2;
            q=q+1;
        }
        else
        {
            q=q+1;
        }
    }
    q=q/2;

    if(p>=4)
    {
        s=p/4;
        if(p%4!=0)
        {
            p=p%4;
        }

    }
    if(p>0&&p<4)
    {
        s++;
    }

    printf("%d\n",s+q+r+t);

}

