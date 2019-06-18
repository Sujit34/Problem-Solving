#include<stdio.h>
int main()
{
    int n,m,d,cunt,flag;
    while(scanf("%d %d",&n,&m)==2)
    {
        cunt=0;flag=0;
        if(m==n){printf("0\n");return 0;}
        if(m%n==0)
        {
            d=m/n;
            while(d%2==0)
            {
                d=d/2;
                cunt++;
                flag=1;
            }
            while(d%3==0)
            {
                d=d/3;
                cunt++;
                flag=1;
            }
            if(flag==1 && d==1)
            {
                printf("%d\n",cunt);
            }
            else
            {
                printf("-1\n");
            }

        }
        else
        {
            printf("-1\n");
        }
    }
}
