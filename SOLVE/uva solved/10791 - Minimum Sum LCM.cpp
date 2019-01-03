/*logic--
sum of prime factors.
ex-12=2^2*3^1;
result=2^2*3^1=7;
if the number is prime then ans is number+1;
ex-7=1*7;
result=1+7;
if the number has one prime fector thn ans is number+1;
ex-4=2^2;
result=4+1;*/
#include<stdio.h>
#include<math.h>
#define max 32767
int main()
{
    int i,j,t,l=2,prime[5000];
    prime[0]=2;
    prime[1]=3;
    for(i=5;i<=max;i++)
    {
        t=1;
        for(j=2;j<=sqrt(i)+1;j++)
        {
            while(i%j==0)
            {
                t=0;
                break;
            }
        }
        if(t==1)
        {
            prime[l++]=i;

        }
    }
    int n,po,count,p,u,q;
    long long int sum;
    t=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            printf("Case %d: 2\n",t++);
        }
        else {
        sum=0;p=0;q=0;
        for(i=0;i<l;i++)
        {

            u=0;
            count=0;
            po=1;
            while(n%prime[i]==0)
            {
                count++;
                n=n/prime[i];
                po=po*prime[i];
                u=1;p++;
                q=prime[i];
            }
            if(u==1)
            {
                sum=sum+po;
            }


            if(n==1)
            {
                break;
            }
        }
        if(n>1)
        {
            sum=sum+n;
            p=1;
        }
        if(p==1||q==2)
        {
            printf("Case %d: %lld\n",t++,sum+1);
        }
        else
        {
            printf("Case %d: %lld\n",t++,sum);
        }
        }

    }
    return 0;
}
