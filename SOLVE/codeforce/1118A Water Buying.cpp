#include<stdio.h>
int main()
{
    int q,a,b;
    long long int n;
    long long int tc1,tc2;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%lld %d %d",&n,&a,&b);

        tc1=n*a;
        tc2=(n/2)*b + (n%2)*a;

        if(tc1<tc2)
            printf("%lld\n",tc1);
        else
            printf("%lld\n",tc2);

    }
}

