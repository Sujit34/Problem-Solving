#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct Point
{
    double x;
    double y;

};
double intersectingpoint(Point d, Point e, Point f,Point p1,Point p2,Point p3)
{


    double A1,A2,B1,B2,C1,C2,det,x,y,px,py,qx,qy,rx,ry,pq,qr,pr,s,area;

    A1=d.y-p1.y;
    B1=p1.x-d.x;
    C1=A1*p1.x+B1*p1.y;

    A2=e.y-p2.y;
    B2=p2.x-e.x;
    C2=A2*p2.x+B2*p2.y;

    det=A1*B2-A2*B1;
    x=(B2*C1-B1*C2)/det;
    y=(A1*C2-A2*C1)/det;
    px=x;py=y;


    A1=f.y-p3.y;
    B1=p3.x-f.x;
    C1=A1*p3.x+B1*p3.y;

    A2=e.y-p2.y;
    B2=p2.x-e.x;
    C2=A2*p2.x+B2*p2.y;

    det=A1*B2-A2*B1;
    x=(B2*C1-B1*C2)/det;
    y=(A1*C2-A2*C1)/det;
    qx=x;qy=y;


    A1=d.y-p1.y;
    B1=p1.x-d.x;
    C1=A1*p1.x+B1*p1.y;

    A2=f.y-p3.y;
    B2=p3.x-f.x;
    C2=A2*p3.x+B2*p3.y;

    det=A1*B2-A2*B1;
    x=(B2*C1-B1*C2)/det;
    y=(A1*C2-A2*C1)/det;
    rx=x;ry=y;

    pq=sqrt(((px-qx)*(px-qx))+((py-qy)*(py-qy)));

    qr=sqrt(((rx-qx)*(rx-qx))+((ry-qy)*(ry-qy)));

    pr=sqrt(((px-rx)*(px-rx))+((py-ry)*(py-ry)));

    s=(pq+qr+pr)/2;
    area=sqrt(s*(s-pq)*(s-qr)*(s-pr));

    printf("%.0lf\n",area);



}

double point_def(Point p1,Point p2,Point p3)
{
    Point d,e,f;
    double x,y;

    x=(1*p3.x+2*p2.x)/(1+2);
    y=(1*p3.y+2*p2.y)/(1+2);
    d.x=x;d.y=y;

    x=(1*p1.x+2*p3.x)/(1+2);
    y=(1*p1.y+2*p3.y)/(1+2);
    e.x=x;e.y=y;

    x=(1*p2.x+2*p1.x)/(1+2);
    y=(1*p2.y+2*p1.y)/(1+2);
    f.x=x;f.y=y;
    intersectingpoint(d,e,f,p1,p2,p3);

}
int main()
{
     int n;
     double x,y;
     cin>>n;
    while(n--)
    {
        Point p1,p2,p3;
        scanf("%lf %lf",&x,&y);
        p1.x=x;p1.y=y;
        scanf("%lf %lf",&x,&y);

        p2.x=x;p2.y=y;

        scanf("%lf %lf",&x,&y);
        p3.x=x;p3.y=y;

        point_def(p1,p2,p3);

    }

    return 0;
}
