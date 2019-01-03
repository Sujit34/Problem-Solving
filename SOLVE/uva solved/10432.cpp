#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
int main()
{
    double r,N,s,p,q,t;
    while(scanf("%lf%lf",&r,&N)==2)
    {
        p=360/N;
     s=sin(p*PI/180);
     q=r*r*N*s;
     t=q/2;
     printf("%.3lf\n",t);

    }
    return 0;
}



