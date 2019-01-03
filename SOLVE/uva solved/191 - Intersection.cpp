


#include <iostream>
#include<cstdio>
using namespace std;

struct Point
{
    double x;
    double y;
};


bool isInside_rect(int xstart, int ystart, int xend, int yend,  int xleft, int ytop, int xright, int ybottom)
{
    return (xstart >= min(xleft, xright) && xstart <= max(xleft, xright) && ystart >= min(ybottom, ytop) && ystart <= max(ybottom, ytop) ||
    xend >= min(xleft, xright) && xend <= max(xleft, xright) && yend >= min(ybottom, ytop) && yend <= max(ybottom, ytop)
           );
}




bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       {return true;}

    return false;
}


double orientation(Point p, Point q, Point r)
{

    double val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;

    return (val > 0)? 1: 2;
}


bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{

    double o1 = orientation(p1, q1, p2);
    double o2 = orientation(p1, q1, q2);
    double o3 = orientation(p2, q2, p1);
    double o4 = orientation(p2, q2, q1);


    if (o1 != o2 && o3 != o4)
        return true;


    if (o1 == 0 && onSegment(p1, p2, q1)) return true;


    if (o2 == 0 && onSegment(p1, q2, q1)) return true;

    if (o3 == 0 && onSegment(p2, p1, q2)) return true;


    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}


int main()
{
    double x,y,a,b,c,d,a1,a2,a3,a4,n,e,f,g,h;

    scanf("%lf",&n);
    while(n--)
    {
        Point p1,q1,p2,q2,p3,q3,p4,q4,p5,q5;
        scanf("%lf %lf",&x,&y);
        e=x;f=y;
        p2.x=x;p2.y=y;
        scanf("%lf %lf",&x,&y);
        g=x;h=y;
        q2.x=x;q2.y=y;

        scanf("%lf %lf",&x,&y);
        a=x;b=y;
        scanf("%lf %lf",&x,&y);
        c=x;d=y;

        if(isInside_rect(e,f,g,h,a,b,c,d))
        {
            printf("T\n");
        }
        else
        {
            p1.x=a;p1.y=d;
            q1.x=c;q1.y=d;
            p3.x=c;p3.y=d;
            q3.x=c;q3.y=b;
            p4.x=c;p4.y=b;
            q4.x=a;q4.y=b;
            p5.x=a;p5.y=b;
            q5.x=a;q5.y=d;



            a1=doIntersect(p1, q1, p2, q2)? 1: 2;
            a2=doIntersect(p3, q3, p2, q2)? 1: 2;
            a3=doIntersect(p4, q4, p2, q2)? 1: 2;
            a4=doIntersect(p5, q5, p2, q2)? 1: 2;
            if(a1==1||a2==1||a3==1||a4==1)
            {
                printf("T\n");
            }
            else
            {
                printf("F\n");
            }
        }









    }

    return 0;
}
