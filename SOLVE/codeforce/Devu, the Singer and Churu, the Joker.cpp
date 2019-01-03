#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define LLI long long int
#define ULL unsigned long long
#define PI acos(-1.0)
#define EPS 1e-9
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;

int main()
{
    int n,d,t=0,res,i,a[1001];
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        t=t+a[i]+10;
    }
    t=t-10;
    if(d>=t)
    {
       d=d-t;
       d=d/5;
       n=n-1;
       res=n*2+d;
       cout<<res;
    }
    else
    {
        printf("-1");
    }



}
