#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,w,a,b,c,d,e,f,g,h,i;
    while(scanf("%lf%lf%lf",&u,&v,&w)==3){
    a=u+v+w;
    b=a/2;
    c=b-u;
    d=b-v;
    e=b-w;
    f=b*c*d*e;
    g=sqrt(f);
    h=4*g;
    i=h/3;
    if(i>0)
    printf("%.3lf\n",i);
    else
    printf("-1.000\n");}
    return 0;}
