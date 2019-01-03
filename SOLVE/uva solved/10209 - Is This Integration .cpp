#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 3.141592653589793
using namespace std;
int main()
{
double a,ab,theta,angle,strip,doted,other,s,area_of_triangle,diagonal,half_square;
while(scanf("%lf",&a)==1){
    if(a==0)
    {
        printf("0.000 0.000 0.000\n");
    }
    else{
ab=((sqrt(3)-1)/2)*a*sqrt(2);
s=(a+a+ab)/2;
area_of_triangle=sqrt(s*(s-a)*(s-a)*(s-ab));
theta=((2*a*a)-(ab*ab))/(2*a*a);
angle=(acos(theta)*180.0)/pi;
strip=(ab*ab)+4*(((pi*a*a*angle)/360)-area_of_triangle);
half_square=(a*a)/2;
doted=((((((pi*a*a)/4)-half_square)*2)-strip)*2);
other=(a*a)-(strip+doted);
printf("%.3lf %.3lf %.3lf\n",strip,doted,other);
}
}



}
