#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    char s[101];
    double t,r1,r2,R;
    double area_big,area_small,result;
    scanf("%lf",&t);
    getchar();
    while(t--)
    {
        r1=-1;r2=-1;
        gets(s);
        sscanf(s,"%lf %lf",&r1,&r2);
        if(r1>=0&&r2>=0){
        R=r1+r2;
        area_big=(R*R*pi);
        area_small=(r1*r1*pi)+(r2*r2*pi);
        result=area_big-area_small;
        printf("%.4lf\n",result);
        }
        if(r1>=0&&r2==-1)
        {
            r1=r1/2;
            area_big=(r1*r1*pi);
            r1=r2=r1/2;

            area_small=(r1*r1*pi)+(r2*r2*pi);
            result=area_big-area_small;
            printf("%.4lf\n",result);

        }




    }
}
