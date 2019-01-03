#include<stdio.h>
int main()
{
    int n,e,f,sum;
    while(scanf("%d",&n)==1)
    {
        while(n>0)
        {sum=n;
            if(n%3==2)
            {n=n+1;
            read:
            e=n/3;
            f=n%3+e;
            sum=sum+e;
            if(f/3==0)
            {printf("%d\n",sum);break;}
            else{n=f;
            goto read;}
            }
            else
            {
            read1:
            e=n/3;
            f=n%3+e;
            sum=sum+e;
            if(f==1)
            {printf("%d\n",sum);break;}
            else if(f==2)
            {sum=sum+1;
                printf("%d\n",sum);break;}
            else{n=f;
            goto read1;}
            }
        }
    }
    return 0;
}
