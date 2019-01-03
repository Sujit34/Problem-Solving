#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,n2,count,arr[100],i,j,c;
    double ans;
    while(scanf("%d",&n)==1){
        if(n==0)
        {
            return 0;
        }
        count=0;
    c=(n*(n-1))/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            n1=arr[i];
        n2=arr[j];
        while(n1 != n2)
     {
      if(n1 > n2)
       n1 = n1 - n2 ;
      if(n2 > n1)
       n2 = n2 - n1 ;
     }
     if(n1==1)
     {
         count++;
     }
        }

    }
    if(count!=0)
    {
        ans=sqrt((6*c)/(count*1.0));
    printf("%.6lf\n",ans);
    }
    else
    {
        printf("No estimate for this data set.\n");
    }
}
return 0;
}
