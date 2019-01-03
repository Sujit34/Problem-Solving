#include<stdio.h>
int main()
{
    int n,i,a,a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,p,q,t,j;
    while(scanf("%d",&t)==1)
    {
        for(j=1;j<=t;j++){
            scanf("%d",&n);
        a0=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;a9=0;

        for(i=1;i<=n;i++)
    {q=i;

        while(q!=0)
        {
            a=q%10;
            p=q/10;
            q=p;
            if(a==0)
            {
                a0++;
            }
            else if(a==1)
            {
                a1++;
            }
           else if(a==2)
            {
                a2++;
            }
           else if(a==3)
            {
                a3++;
            }
           else if(a==4)
            {
                a4++;
            }
           else if(a==5)
            {
                a5++;
            }
           else if(a==6)
            {
                a6++;
            }
           else if(a==7)
            {
                a7++;
            }
           else if(a==8)
            {
                a8++;
            }
           else if(a==9)
            {
                a9++;
            }
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
}}
return 0;
}

