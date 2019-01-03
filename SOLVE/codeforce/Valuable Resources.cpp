#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    long long int n,a[10001],b[10001],p,q,r,s,i,area,dis1,dis2;
    cin>> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    p=a[0];
    q=b[0];
    r=a[n-1];
    s=b[n-1];
    if(p==q&&q==r&&r==s)
    {
        printf("1");
    }
    else{
    dis1=r-p;
    dis2=s-q;

    if(dis1>dis2)
    {

       cout<< dis1*dis1;

    }
    if(dis1<dis2)
    {

         cout<< dis2*dis2;
    }
    if(dis1==dis2)
    {

         cout<< dis1*dis1;
    }

    }
}
