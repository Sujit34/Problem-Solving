#include<stdio.h>
#include<math.h>
#define EPS 1e-9
#define PI acos(-1.0)
int main()
{int n,tc=1;
scanf("%d",&n);
while(n--)
{double h,k,bd,x,y,c,c1=-1,p,q,r,l,hi;
scanf("%lf %lf %lf",&x,&y,&r);
l=0;
if(x>y)
hi=y;
else
hi=x;
while(fabs(c1-r)>EPS)
{
bd=(l+hi)/2;
p=(y*y)-(bd*bd);
h=sqrt(p);
q=(x*x)-(bd*bd);
k=sqrt(q);
c1=(k*h)/(k+h);
if(c1<r)
{
hi=bd;
}
else
{
l=bd;
}


}
printf("Case %d: %.9lf\n",tc++,hi);}
return 0;
}
