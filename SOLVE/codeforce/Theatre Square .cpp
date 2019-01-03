#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a,p=1,q=1,r=1;
    double q1,r1;
    cin >> n >> m >> a;
    if(n<a||m<a||n==a||m==a)
    {
        p=1;
    }
    if(m>a)
    {
        q1=double(m)/double(a);
        q=q1;
        if(q1>q)
        {
            q=q+1;
        }
    }
    if(n>a)
    {
        r1=double(n)/double(a);
        r=r1;
        if(r1>r)
        {
            r=r+1;
        }
    }

    cout << p*q*r << endl;
}
