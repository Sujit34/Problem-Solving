#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    int n;
    double l,w,r,A,R,red,green;
    scanf("%d",&n);
    while(n-->0)
    {
        scanf("%lf",&l);
        w=.6*l;
        r=.2*l;
        R=pi*r*r;
        A=l*w;
        red=R;
        green=A-R;
        printf("%.2lf %.2lf\n",red,green);
    }
    return 0;

}

