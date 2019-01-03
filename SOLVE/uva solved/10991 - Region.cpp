#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi 3.141592653589793
using namespace std;
int main()
{
    double n,r1,r2,r3,a,b,c,s,tri_area,thetaA,thetaB,thetaC,cirA,cirB,cirC,result;
    cin>>n;
    while(n--)
    {
        cin>>r1>>r2>>r3;
        a=r2+r3;
    b=r1+r3;
    c=r1+r2;
    s=(a+b+c)/2;
    tri_area=sqrt(s*(s-a)*(s-b)*(s-c));

    thetaB=acos(((a*a)+(c*c)-(b*b))/(2*a*c));;
    thetaB=(thetaB*180)/pi;
    thetaB=360/thetaB;
    cirB=(pi*r2*r2)/thetaB;

    thetaA=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
    thetaA=(thetaA*180)/pi;
    thetaA=360/thetaA;
    cirA=(pi*r1*r1)/thetaA;

    thetaC=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
    thetaC=(thetaC*180)/pi;
    thetaC=360/thetaC;
    cirC=(pi*r3*r3)/thetaC;


    result=tri_area-(cirA+cirB+cirC);
    printf("%.6lf\n",result);
    }
}
