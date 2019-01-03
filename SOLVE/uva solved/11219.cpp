#include<stdio.h>
int main()
{
    int t,d,m,y,d1,m1,y1,y2,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&d,&m,&y);
            scanf("%d/%d/%d",&d1,&m1,&y1);
            if(d1>d)
            {
            m1=m1+1;}
            if(m1>m)
            {
            y1=y1+1;}
            y2=y-y1;
            if(y2<0)
            printf("Case #%d: Invalid birth date\n",i);
            else if(y2>130)
            printf("Case #%d: Check birth date\n",i);
            else
            printf("Case #%d: %d\n",i,y2);
}

    }
    return 0;
}

