#include<stdio.h>
#include<math.h>
int main()
{
    double p,x,n,d,e,f,g;
    int h,k,t=1;
    while(scanf("%lf",&x)==1)
    {
        if(x==0)
        return 0;
        else{p=2*x;
            d=4*1*(-p);
            e=9-d;
            f=sqrt(e);
            g=3+f;
            n=g/2;
            h=(int)n;
            if(n>h)
            {
                k=h+1;
                printf("Case %d: %d\n",t,k);
            }
            else
            {
                printf("Case %d: %d\n",t,h);
            }
            t++;
        }
    }
    return 0;
}

