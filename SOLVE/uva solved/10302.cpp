#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,s;
    while(scanf("%lld",&n)==1){s=0;
    for(i=1;i<=n;i++)
    {
        s=s+(i*i*i);
    }
    printf("%lld\n",s);
    }
    return 0;
}
