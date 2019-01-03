#include<stdio.h>
int main()
{
    long long int n,s,d,p,q;
    while(scanf("%lld",&n)==1)
    {
        while(n--){
        scanf("%lld %lld",&s,&d);
        if(s<d||(s-d)%2!=0)
        {
             printf("impossible\n");
        }
       else
       {
           p=(s-d)/2;
             q=p+d;
        printf("%lld %lld\n",q,p);
       }
        }

    }

}
