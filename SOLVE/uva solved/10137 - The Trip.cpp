#include<stdio.h>
int main()
{
    double a[1005],sum,avg,pd,nd;
    int n,i,p;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        return 0;
        sum=0;pd=0;nd=0;
      for(i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);

        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        double v = (long) ((a[i] - avg) * 100.0) / 100.0;
        if(v>0)
        {
            pd=pd+v;
        }
        else
        {
            nd=nd+v;
        }
    }
    nd=-nd;
    printf("$%.2f\n", nd> pd? nd : pd);
    }
    return 0;

}

