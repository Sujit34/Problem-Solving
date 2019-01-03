#include<stdio.h>
#include<math.h>
#define EPS 1e-9
#define PI acos(-1.0)
int main()
{
int n,i=1;
double a,b,c,t,trapi,tri,de,ae,s,ad,s1,t1,triangle,l,h,p,q,A,B,C,E,F,G;
scanf("%d",&n);
while(n-->0){
scanf("%lf %lf %lf %lf",&c,&b,&a,&p);
E=((b*b)+(c*c)-(a*a))/(2*b*c);
A=acos(E)*180.0/PI;
F=((a*a)+(c*c)-(b*b))/(2*a*c);
B=acos(F)*180.0/PI;
G=((a*a)+(b*b)-(c*c))/(2*a*b);
C=acos(G)*180.0/PI;
s=(a+b+c)/2;
t=s*(s-a)*(s-b)*(s-c);
tri=sqrt(t);
//bisection start
l=0;h=c;
ad=(h+l)/2;
while(fabs(l-h)>EPS)
{de=(sin(A*PI/180)*ad)/sin(C*PI/180);
ae=(sin(B*PI/180)*ad)/sin(C*PI/180);
s1=(ad+de+ae)/2;
t1=s1*(s1-ad)*(s1-ae)*(s1-de);
triangle=sqrt(t1);
trapi=tri-triangle;
if((triangle/trapi)<p)
{l=ad;}
else
{h=ad;}
ad=(l+h)/2;
}printf("Case %d: ",i++);
printf("%.9lf\n",ad);}
//bisection finish
return 0;
}

