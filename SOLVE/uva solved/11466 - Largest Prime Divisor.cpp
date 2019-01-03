#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,s_r,prime[80000],count,gap,p,k;
    prime[0]=2;
    prime[1]=3;
    count=2;
    for(i=5,gap=2;i<=1000000;i=i+gap,gap=6-gap)
    {
        p=1;
        for(j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }
        }
        if(p!=0)
        {
            prime[count++]=i;
        }
    }
    long long int n,list[99999];
    while(scanf("%lld",&n)==1)
    {
        k=0;
        if(n==0)
        return 0;
        if(n<-1)
        {
            n=-1*n;
        }
        if(n==1||n==-1)
        printf("-1\n");
        else{

        for(i=0;i<count;i++)
        {
            while(n%prime[i]==0)
            {

                list[k++]=prime[i];
                n=n/prime[i];
            }
            if(n==1)
            {break;}
        }
        if(n!=1)
         list[k++]=n;
         if(list[0]==list[k-1])
         printf("-1");
         else
         printf("%lld",list[k-1]);
        printf("\n");
    }}
    return 0;
}

