#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
double area (double x, double y, double z)
{
    if ( x + y < z || x + z < y || y + z < x ) return 0;
    double area = x + y + z;
    area /= 2;

    return sqrt (area * (area - x) * (area - y) * (area - z));
}
int main()
{
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        int n,i,flag=0,l; scanf ("%d", &n);
        double a [10000 + 10],x,y,z,s,ret=0,ans[10001];

        for (int i=0;i<n; i++)
         scanf ("%lf", &a [i]);
          sort(a,a+n);
        for(i=n-1,l=0;i>=2;i--)
        {

                ret =   area (a [i], a [i - 1], a [i - 2]);
                ans[l++]=ret;

        }
        sort(ans,ans+l);
        printf ("%.2lf\n", ans[l-1]);
    }
}
