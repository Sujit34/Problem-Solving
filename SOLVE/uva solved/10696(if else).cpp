
#include<stdio.h>
int main()
{
    int n,k;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        return 0;
        else
        {
            if(n<=101)
            printf("f91(%d) = 91\n",n);
            else
            {
                k=n-10;
                printf("f91(%d) = %d\n",n,k);
            }
        }
    }
    return 0;

}
