#include<stdio.h>
int main()
{
    int n,i,flag1,flag2,p,q,j;
    scanf("%d",&n);


        for(i=4;i<n;i++)
        {
            p=i;
            q=n-i;
            flag1=0,flag2=0;
            for(j=2;j<=p/2;j++)
             {
               if(p%j==0)
                {
                    flag1=1;
                   break;
                }
            }
            for(j=2;j<=q/2;j++)
             {
               if(q%j==0)
                {
                    flag2=1;
                   break;
                }
            }
            if(flag1==1&&flag2==1)
            {
                printf("%d %d\n",p,q);
                break;
            }



    }
}
