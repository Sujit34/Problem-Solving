#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    double a,b,c,tri,tri_ar,incir,incir_ar,pericir,pericir_ar,s,r,v,su;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
    s=(a+b+c)/2;
    tri=s*(s-a)*(s-b)*(s-c);
    tri_ar=sqrt(tri);
    incir=(2*tri_ar)/(a+b+c);
    incir_ar=pi*incir*incir;
    pericir=(a*b*c)/(tri_ar*4);
    pericir_ar=pi*pericir*pericir;
    r=incir_ar;
    v=tri_ar-r;
    su=pericir_ar-tri_ar;
    printf("%.4lf %.4lf %.4lf\n",su,v,r);
    }
    return 0;

}

