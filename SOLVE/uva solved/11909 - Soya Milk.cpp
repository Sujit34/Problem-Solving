#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi acos(-1.0)
using namespace std;
double degToRad(double d) {
	return d * pi / 180.0;
}
int main()
{

    int l,w,h,angle,angle_a,angle_b,angle_c;
    double a,b,c,s,area=0,volume,volume1,final_volume,k,angle_h,angle_l,angle_alpha,angle_theta,angle_remain;
    while(cin>>l>>w>>h>>angle)
    {

        double hprime = tan(degToRad(angle)) * l;
        if(hprime<h)
        {
        angle_a=angle;
        angle_b=90;
        angle_c=180-(angle_a+90);
        a=l;
        b=(a/sin((angle_c*pi)/180))*sin((angle_a*pi)/180);
        c=(a/sin((angle_c*pi)/180))*sin((angle_b*pi)/180);
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        volume1=area*w;
        volume=l*w*h;
        final_volume=volume-volume1;
        printf("%.3lf mL\n",final_volume);
        }
        else
        {
             k=sqrt(l*l+h*h);
        angle_l=acos((l*l+k*k-h*h)/(2*l*k));
        angle_l=(angle_l*180)/pi;
        angle_h=180-(90+angle_l);
        angle_theta=angle-angle_l;
        angle_alpha=90-angle_h;
        angle_remain=180-(angle_theta+angle_alpha);
        a=k;
        b=(k/sin((angle_remain*pi)/180))*sin((angle_alpha*pi)/180);
        c=(a/sin((angle_remain*pi)/180))*sin((angle_theta*pi)/180);
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        s=(l+h+k)/2;
        area=area+sqrt(s*(s-l)*(s-h)*(s-k));
        volume1=area*w;
        volume=l*w*h;
        final_volume=volume-volume1;
        printf("%.3lf mL\n",final_volume);
        }



    }

}
