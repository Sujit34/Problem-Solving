

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 3.141592653589793
using namespace std;
int main()
{
    int n,l,i,j,a[1001];
    double r,b[1001],c[5];
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0,j=0;i<n-1;i++)
    {
        b[j++]=a[i+1]-a[i];

    }
    sort(b,b+j);
    r=b[j-1]/2;
    j=0;
    if(a[0]!=0)
    {
         c[j++]=a[0]-0;
    }

   c[j++]=r;
   if(a[n-1]!=l)
   {
       c[j++]=l-a[n-1];
   }

   sort(c,c+j);
   printf("%lf\n",c[j-1]);

}
