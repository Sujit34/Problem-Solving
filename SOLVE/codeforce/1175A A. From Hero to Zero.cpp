#include<stdio.h>
int main()
{
    int t;
    long long int n,k,ov,cunt;
    scanf("%d",&t);
    while(t--)
    {
        cunt=0;
        scanf("%lld %lld",&n,&k);
        while(n>k)
        {
            ov=n;
            n=n/k;
            cunt = cunt + 1 + (ov-n*k);
        }

        if(n==k){cunt = cunt + 2;}
        if(n<k) {cunt = cunt + n;}
        printf("%lld\n",cunt);

    }
}
