#include<stdio.h>
int main()
{
    int n,sum,i;
    char op;

    while(scanf("%d",&n)==1)
    {
        getchar();
        sum=0;

        for(i=1;i<=n;i++)
        {
            scanf("%c",&op);
            if(sum==0 && op=='-'){sum=1;}
            if(op=='-')
            {
                sum=sum-1;
            }
            else if(op=='+')
            {
                sum=sum+1;
            }

        }

        if(sum<=0){printf("0\n");}
        else{printf("%d\n",sum);}
        }

}

