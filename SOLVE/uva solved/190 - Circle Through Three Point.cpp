/*
first select a point (x,y)and consider it the center of the circle.
then find the distance of A,B,C point from center and get 3 equation.
as three points are the boundary point of circle so all the distance are equal.
Now taking any 2 equal equation we get final 2 equation and solving them we get (x,y)[center of the circle].
then we get the radius of the circle as we now the center point and we have boundary point.
*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    double Ax,Ay,Bx,By,Cx,Cy,p,q,r,p1,q1,r1,q2,p2,r2,h,k,rad,h1,k1,e;
    while(cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy){
    p=-2*Ax+2*Bx;
    q=-2*Ay+2*By;
    r=Ax*Ax+Ay*Ay-Bx*Bx-By*By;

    p1=-2*Bx+2*Cx;
    q1=-2*By+2*Cy;
    r1=Bx*Bx+By*By-Cx*Cx-Cy*Cy;

    if(p1!=0){
    p2=p/p1;
    q2=q1*(-1)*p2+q;
    r2=r1*(-1)*p2+r;
    k=((-1)*r2)/q2;
    }
    else
    {
        k=((-1)*r1)/q1;
    }

    if(q1!=0){
    q2=q/q1;
    p2=p1*(-1)*q2+p;
    r2=r1*(-1)*q2+r;
    h=((-1)*r2)/p2;
    }
    else
    {
        h=((-1)*r)/q;
    }

    rad=sqrt((h-Ax)*(h-Ax)+(k-Ay)*(k-Ay));

    if(h>=0&&k>=0)
    {
        printf("(x - %.3lf)^2 + (y - %.3lf)^2 = %.3lf^2\n",h,k,rad);
    }
    if(h<0&&k<0)
    {
        k1=(-1)*k;h1=(-1)*h;
        printf("(x + %.3lf)^2 + (y + %.3lf)^2 = %.3lf^2\n",h1,k1,rad);
    }
    if(h>0&&k<0)
    {
        k1=(-1)*k;
        printf("(x - %.3lf)^2 + (y + %.3lf)^2 = %.3lf^2\n",h,k1,rad);
    }
    if(h<0&&k>0)
    {
        h1=(-1)*h;
        printf("(x + %.3lf)^2 + (y - %.3lf)^2 = %.3lf^2\n",h1,k,rad);
    }


    e=(rad*rad)-((h*h)+(k*k));

    printf("x^2 + y^2 ");
    if ( h< 0 ) printf("+ %.3lfx ",-2*h);
    else printf("- %.3lfx ",2*h);
    if ( k < 0 ) printf("+ %.3lfy ",-2*k);
    else printf("- %.3lfy ",2*k);
    if ( e < 0 ) printf("+ %.3lf = 0\n\n",-e);
    else printf("- %.3lf = 0\n\n",e);

    }


}


