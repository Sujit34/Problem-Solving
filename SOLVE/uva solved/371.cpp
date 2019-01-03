#include<stdio.h>
int main()
{
    int a,b,i,k,count,m,p,t;
    while(scanf("%d%d",&a,&b)==2)
    {if(a==0&&b==0)
    return 0;
    else{
        m=0;

    if(a>b)
    {
        p=a;a=b;b=p;
         printf("Between %d and %d",a,b);
    }
    else
    printf("Between %d and %d",a,b);
        for(i=a;i<=b;i++)
        {count=0;k=i;
          while(k>=1)
    {

        if((k%2)==0)
       k=k/2;
        else k=3*k+1;
            count++;
            if(k==1)
            break;
    }
           if(count>m)
           {m=count;
           t=i;}

            }
            printf(", %d generates the longest sequence of %d values.\n",t,m);
        }}
        return 0;
}



