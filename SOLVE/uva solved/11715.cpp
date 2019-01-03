#include<stdio.h>
#include<math.h>
    int main()
    {
    int d=1,b;
    double u,v,t,s,a;
    while(1){
    scanf("%d",&b);
    if(b==1)
    {scanf("%lf%lf%lf",&u,&v,&t);
    a=(v-u)/t;
    s=(u*t)+(.5*a*t*t);
    printf("Case %d: %.3f %.3f\n",d,s,a);
    d++;
    }
    else if(b==2)
    { scanf("%lf%lf%lf",&u,&v,&a);
    t=(v-u)/a;
    s=(u*t)+(.5*a*t*t);
    printf("Case %d: %.3f %.3f\n",d,s,t);
    d++;
    }
    else if(b==3)
    {scanf("%lf%lf%lf",&u,&a,&s);
    v=sqrt((u*u)+(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %.3f %.3f\n",d,v,t);
    d++;
    }
    else if(b==4)
    {
    scanf("%lf%lf%lf",&v,&a,&s);
    u=sqrt((v*v)-(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %.3f %.3f\n",d,u,t);
    d++;}
    else if(b==0)
    {
        return 0;
    }}
    return 0;
    }


