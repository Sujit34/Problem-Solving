#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 3.141592653589793
using namespace std;
int main()
{
    int n,a[10001],m,min,p,q,diff,i,j,b[100001],c[100001];
    while(cin>>n)
    {
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    min=1000001;p=0;q=0;
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==m)
            {
                b[p]=a[i];
                c[p]=a[j];
                p++;
                diff=a[j]-a[i];
                if(min>diff)
                {
                    min=diff;
                }
                break;
            }
            if(a[i]+a[j]>m)
            {
                break;
            }
        }
    }
    for(i=0;i<p;i++)
    {
        if(c[i]-b[i]==min)
        {
            printf("Peter should buy books whose prices are %d and %d.\n\n",b[i],c[i]);
            break;
        }
    }
    }

}
