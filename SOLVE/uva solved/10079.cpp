#include<stdio.h>
int main()
{
    long int n,x,d;
    while(scanf("%ld",&n)==1)
    {
        if(n<0)
        return 0;
        else
        {
            d=(n+1)*n;
            x=(d/2)+1;
            printf("%ld\n",x);
        }
    }
    return 0;
}
