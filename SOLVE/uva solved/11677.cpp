#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {
        if(a==0&&b==0&&c==0&&d==0)
        return 0;
        else{
        e=a*60+b;
        f=c*60+d;
        if(f<e)
        {g=f+1440;
        h=g-e;
        printf("%d\n",h);}
        else
        {
            i=f-e;
            printf("%d\n",i);
        }
        }
    }
    return 0;
}
