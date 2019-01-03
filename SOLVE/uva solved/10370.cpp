#include<stdio.h>
int main()
{
    int a[1000],sum,count,i,n,m,avg,j;
    float avg1;
    while(scanf("%d",&n)==1)
    {
        for(j=1;j<=n;j++){
        scanf("%d",&m);
        count=0;sum=0;
        for(i=1;i<=m;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        avg=sum/m;
       for(i=1;i<=m;i++)
       {
           if(a[i]>avg)
           {
               count=count+1;}}
               avg1=(float)count/(float)m;
               avg1=avg1*100;
               printf("%.3f%\n",avg1);

           }}
           return 0;
}

