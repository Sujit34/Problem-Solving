#include<stdio.h>
int main()
{
    int a,b,c,n,sum,i;
    while(scanf("%d",&n)==1)
{           if(n==0)
            return 0;
            read:
            sum=0;
            while(n>0)
            {
            b=n%10;
            c=n/10;
            n=c;
            sum=sum+b;}
            if(sum/10==0)
            printf("%d\n",sum);
            else{n=sum;
            goto read;}
}
return 0;
}



