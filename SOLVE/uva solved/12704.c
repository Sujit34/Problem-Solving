#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y;
    double p,q,r;
    while(scanf("%d",&n)==1)
    {
        while(n-->0){
        scanf("%d%d%lf",&x,&y,&r);
        double d=sqrt((x*x)+(y*y));
        p=r-d;
        q=r+d;
        printf("%.2lf %.2lf\n",p,q);
        }
    }
    return 0;
}

