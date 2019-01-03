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
    double n,d,l,result,a,b;
    cin>>n;
    while(n--)
    {
        cin>>d>>l;
        a=l/2;
        b=sqrt(((l/2)*(l/2))-((d/2)*(d/2)));
        result=PI*a*b;
        printf("%.3lf\n",result);
    }
}
