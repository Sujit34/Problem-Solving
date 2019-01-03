    /*You can calculate theta1 and theta2 as you did before.
Both angles represent the angle the sectors make on the centres.

Now, to calculate common area, it can be divided in to two parts.
Calculations for both parts are similar except changing circle1 to circle2 and theta1 to theta2.
So, I will explain only one of them.

We have to calculate two areas first.
One, is the area of the sector, and the other is the area of the triangle.
Then the required area is the difference between them.

The area of the sector with radius r1 and angle theta1 is 0.5*theta1*r1*r1.

To calculate the area of the triangle.
Now, the line connecting the centres divide the triangle into two equal parts.
Each smaller triangle is a right triangle, with hypotenuses = r1, and one of the angle being theta1/2.
From this we can calculate the other two sides of the smaller triangle and find the area.
The length of the side along the line connecting the centres = r1*cos(theta1/2).
The length of the other side = r1*sin(theta1/2).
The area = 0.5 * r1*cos(theta1/2) * r1*sin(theta1/2) = 0.25 * r1*r1*sin(theta1).

So, the total area the triangle = 2 * area of smaller triangles = 0.5*r1*r1*sin(theta1).

Finally, the area of one of the common area = 0.5*theta1*r1*r1 - 0.5*r1*r1*sin(theta1)
= 0.5*r1*r1*(theta1 - sin(theta1)).
*/








    #include<cstdio>
    #include<iostream>
    #include<algorithm>
    #include<cmath>
    #include<cstring>
    #include<cstdlib>
    #define LLI long long int
    #define ULL unsigned long long
    #define pi acos(-1.0)
    #define eps 1e-10
    #define CLR(a) memset(a,0,sizeof(a))
    #define repi(i,a,b) for(int i=a;i<=b;i++)
    using namespace std;
    template< class T > inline T sq(T a) { return a * a; }
    template< class T, class X > inline T _pow(T a,X y) {T z=1; repi(i,1,y){z*=a;} return z; }
    template< class T > inline T gcd(T a, T b) {while(b) b ^= a ^= b ^= a %= b;return a;}
    template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
    int main()
    {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    double x1,x2,y1,y2,r1,r2,theta1,theta2,tri1angle,tri2angle,tri1area,tri2area,finalarea,cir1,cir2,d,s1,s2,arm1,arm2,flag;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    // cout<<d<<endl;
    if(r1>=r2&&((r1-r2)*(r1-r2))>=d*d)
    {
    printf("Case %d: %.8lf\n",i,pi*r2*r2);
    }
    else if(r1<=r2&&((r2-r1)*(r2-r1))>=d*d)
    {
    printf("Case %d: %.8lf\n",i,pi*r1*r1);
    }

    else if(r1+r2<=d)
    {
    printf("Case %d: %.8lf\n",i,0.0);
    }
    else
    {
    theta1=acos(((d*d)+(r1*r1)-(r2*r2))/(2*d*r1));
    theta2=acos(((d*d)+(r2*r2)-(r1*r1))/(2*d*r2));
    theta1=theta1*2;
    theta2=theta2*2;
    //theta1=(180*theta1)/pi;
    //theta2=(180*theta2)/pi;
    // cir1=(pi*r1*r1)*(theta1/(2*pi));
    // cir2=(pi*r2*r2)*(theta2/(2*pi));
    // tri1angle=(pi-theta1)/2;
    // tri2angle=(pi-theta2)/2;
    // tri1angle=(tri1angle*pi)/180;
    //tri2angle=(tri2angle*pi)/180;
    //theta1=(theta1*pi)/180;
    //theta2=(theta2*pi)/180;
    // arm1=(r1/sin(tri1angle))*sin(theta1);
    // arm2=(r2/sin(tri2angle))*sin(theta2);
    // s1=(arm1+r1+r1)/2;
    // tri1area=sqrt(s1*(s1-arm1)*(s1-r1)*(s1-r1));
    // s2=(arm2+r2+r2)/2;
    // tri2area=sqrt(s2*(s2-arm2)*(s2-r2)*(s2-r2));
    // finalarea=(cir1+cir2-(tri1area+tri2area));
    finalarea = 0.5 * (r1*r1*(theta1 - sin(theta1)) + r2*r2*(theta2 - sin(theta2)));
    printf("Case %d: %.8lf\n",i,finalarea+eps);
    }
    }
    return 0;
    }
