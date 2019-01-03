#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        printf("%d = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n=-1*n;
        }
        for(i=2;i<=sqrt(n);i++)
        {
            while(n%i==0)
            {
                printf("%d",i);
                n=n/i;
                if(n>1)
                {
                    printf(" x ");
                }
            }
        }
        if(n>1)
        {
            printf("%d",n);

        }
        printf("\n");
    }
    return 0;
}

