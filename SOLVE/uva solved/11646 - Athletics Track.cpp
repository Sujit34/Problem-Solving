/*
assume w=(low+up)/2.here low=0 and up=400.
then find l using the ratio and w.
then find the diagonal which is the diameter of circle.using the radius and  angle find the arc length.
using the formula (2*l+2*arc_lenght) and bi-section find the actual value of w and l.
*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 3.141592653589793
#define EPS 1e-10
using namespace std;
int main()
{
    double n,m,up,low,w,l,arc_l,diagonal,theta,angle,r;
    int test=1;
    char s;
    while(scanf("%lf %c %lf",&n,&s,&m)==3){
    up=400;low=0;
    while(fabs(up-low)>EPS)
    {
        w=(low+up)/2;
        l=(n/m)*w;
        diagonal=sqrt((w*w)+(l*l));
        r=diagonal/2;
        theta=(2*r*r-w*w)/(2*r*r);
        angle=(acos(theta));
        arc_l=r*angle;
        if(2*l+2*arc_l>400)
        {
            up=w;
        }
        else
        {
         low=w;
        }
    }
    printf("Case %d: %.10lf %.10lf\n",test++,l,w);

    }

}

