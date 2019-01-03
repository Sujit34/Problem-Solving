#include<stdio.h>
#include<string.h>
long long int a[1005][2600];
void fn()
{
    a[0][0]=a[1][0]=1;
    long long int i,j;
    for( i=2;i<1005;i++)
    {
        for(j=0;j<2600;j++)
        {
           a[i][j]+=a[i-1][j]*i;
           if(a[i][j]>9)
           {
               a[i][j+1]+=a[i][j]/10;
               a[i][j]%=10;
           }
        }
    }
}
int main()
{
    fn();
    long long int  n;
    long long int d[15];
    while(scanf("%lld",&n)==1)
    {

        if(n==0)
        {
            return 0;
        }

        long long int  i;
        memset(d,0,sizeof(d));
        printf("%lld! --\n",n);
        for( i=2600-1;i>=0;i--)
            {
                if(a[n][i]!=0)
                break;
            }
        for(;i>=0;i--)
            {
                d[a[n][i]]++;
            }
            for(i=0;i<10;i++)
            {
                if(i!=0||i!=5)
                {
                    printf("    ");
                }
                printf("(%lld)    %3lld",i,d[i]);

                if(i==4)
                {
                    printf("\n");
                }
            }

            printf("\n");

    }
    return 0;
}




