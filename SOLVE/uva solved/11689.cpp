#include<stdio.h>
int main()
{int a,b,c,d,e,f,g,i,sum;
while(scanf("%d",&g)==1)
{
   // sum=0;
        for(i=1;i<=g;i++)
        {sum=0;
            scanf("%d%d%d",&a,&b,&c);
            d=a+b;
            read:
            e=d/c;
            f=d%c+e;
            sum=sum+e;
            if(f/c==0)
            printf("%d\n",sum);
            else{d=f;
            goto read;}}
    }
    return 0;
}
