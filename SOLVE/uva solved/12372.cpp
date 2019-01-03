#include<stdio.h>
int main()
{
    int l1,w1,h1,n,i;
    while(scanf("%d",&n)==1){i=1;
    while(n-->0){
    scanf("%d %d %d",&l1,&w1,&h1);

        if(l1<=20&&w1<=20&&h1<=20)
        {
            printf("Case %d: good\n",i++);
        }
        else
        {
            printf("Case %d: bad\n",i++);
        }
    }
    }

    return 0;
}

