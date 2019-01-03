
#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,q,i,j,k=0,l;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        return 0;
        else
        {
            q=sqrt(n);
            p=cbrt(n);
            for(i=p;i<=q;i++)
            {for(j=i-1;j>=0;j--)
            {
                l=(i*i*i)-(j*j*j);
                if(l==n)
                {k=1;
                printf("%d %d\n",i,j);
               break;}}
               if(k==1)
               break;}
            if(k==0)
            printf("No solution\n");
            else
            k=0;

        }
}
return 0;}
