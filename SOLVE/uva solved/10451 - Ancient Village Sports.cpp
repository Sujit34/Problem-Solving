#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;
int main()
{

    double n,s,area_polygon,radius_out,radius_in,area_outcircle,area_incircle,area_spectators,area_officials;
    int t=1;
    while(scanf("%lf%lf",&n,&s)==2)
    {
        if(n<3)
        {
            return 0;
        }
        area_polygon=s;
        radius_out=(2*s)/(n*sin(2*pi/n));
        radius_in=s/(n*tan(pi/n));
        area_outcircle=(radius_out*pi);
        area_incircle=(radius_in*pi);
        area_spectators=area_outcircle-area_polygon;
        area_officials=area_polygon-area_incircle;
        printf("Case %d: %.5lf %.5lf\n",t++, area_spectators,area_officials);
    }

}
