#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi  2 * acos (0.0)
using namespace std;
int main()
{
    int t,i;
    double n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
         cin>>n;
         double result=(n*2*n*2)-(pi*n*n);
         printf("Case %d: %.2lf\n",i,result);
    }

}
