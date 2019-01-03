#include<stdio.h>
#include<math.h>
int main()
{
    long long int tc,n,res;
    while(scanf("%lld",&tc)==1)
    {
        while(tc--)
        {
        scanf("%lld",&n);
        res=(sqrt(1+(8*n))-1)/2;
        printf("%lld\n",res);
    }
    }
    return 0;
}
