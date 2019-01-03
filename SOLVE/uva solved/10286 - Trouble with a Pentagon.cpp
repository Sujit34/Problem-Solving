#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi acos(-1.0)
using namespace std;
int main()
{
    double a,p,q;
    while(cin>>a)
    {
        p=a*sin((108*pi)/180);
        q=p/sin((63*pi)/180);
        printf("%.10lf\n",q);
    }
}
