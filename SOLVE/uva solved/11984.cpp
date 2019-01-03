#include<stdio.h>
int main()
{
    float c,d,f,sum,t;
    int a,i;
    while(scanf("%d",&a)==1)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%f%f",&c,&d);
            f=((9*c)/5)+32;
            sum=f+d;
            t=((5*sum)-160)/9;
            printf("Case %d: %.2f\n",i,t);
        }
    }
    return 0;
}
