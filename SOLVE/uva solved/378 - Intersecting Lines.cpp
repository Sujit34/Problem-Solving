#include<cstdio>
#include<iostream>
using namespace std;
double t,t1;
struct Point
{
    double x;
    double y;
};


double intersectingpoint(Point p1, Point q1, Point p2, Point q2)
{

    double A1,A2,B1,B2,C1,C2,det,x,y;
    A1=q1.y-p1.y;
    B1=p1.x-q1.x;
    C1=A1*p1.x+B1*p1.y;

    A2=q2.y-p2.y;
    B2=p2.x-q2.x;
    C2=A2*p2.x+B2*p2.y;

    det=A1*B2-A2*B1;
    if(det==0)
    {
        printf("NONE\n");
    }
    else

    {
        x=(B2*C1-B1*C2)/det;
    y=(A1*C2-A2*C1)/det;

    printf("POINT %.2lf %.2lf\n",x,y);

    }


}




double orientation(Point p, Point q, Point r)
{

    double val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;

    return (val > 0)? 1: 2;
}


double doIntersect(Point p1, Point q1, Point p2, Point q2)
{

    double o1 = orientation(p1, q1, p2);
    double o2 = orientation(p1, q1, q2);
    double o3 = orientation(p2, q2, p1);
    double o4 = orientation(p2, q2, q1);

    if (o1 == 0 &&o2==0&&o3==0&&o4==0)
    {
    return 4;
    }


    return 8;
}





int main()
{
    double x,y,a,b,c,d,a1,a2,a3,a4,n;

    scanf("%lf",&n);
    printf("INTERSECTING LINES OUTPUT\n");
    while(n--)
    {
        t=0;t1=0;
        Point p1,q1,p2,q2;
        scanf("%lf %lf",&x,&y);
        p1.x=x;p1.y=y;

        scanf("%lf %lf",&x,&y);
        q1.x=x;q1.y=y;

        scanf("%lf %lf",&x,&y);
        p2.x=x;p2.y=y;
        scanf("%lf %lf",&x,&y);
        q2.x=x;q2.y=y;
        t=doIntersect(p1, q1, p2, q2);
        if(t==4.0)
        {
          printf("LINE\n");
        }
        else if(t==8.0)
        {

              intersectingpoint(p1,q1,p2,q2);


        }
}
printf("END OF OUTPUT\n");
}
