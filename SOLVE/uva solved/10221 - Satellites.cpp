#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 3.141592653589793
using namespace std;
int main()
{
    double theta,s,r=6440,c,  arc_len,distance;
    char str[5];
   while(scanf("%lf %lf",&s,&theta)==2){
    getchar();
    gets(str);
    if(str[0]=='m')
    {
        theta=theta/60;
    }
    if(theta>180)
    {
        theta=360-theta;
    }
    arc_len=(theta*(pi/180))*(r+s);

    distance=sqrt((2*(r+s)*(r+s))-(cos(theta*(pi/180))*2*(r+s)*(r+s)));

    printf("%.6lf %.6lf\n",arc_len,distance);
   }

}
