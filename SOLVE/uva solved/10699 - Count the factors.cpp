#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,s_r,prime[80000],count,gap,p;
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
    long long int n,p1;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        return 0;
        p1=0;
        printf("%d : ",n);
        for(i=0;i<count;i++)
        {
            int flag=0;
            while(n%prime[i]==0)
            {
                //printf("    %d\n",prime[i]);
                n=n/prime[i];
                flag=1;
            }
            if(flag==1)
            {
                p1++;
                flag=0;
            }
            if(n==1)
            {break;}
            //p1++;
        }
        if(n!=1){p1++;}
        //printf("    %lld\n",n);
        printf("%d\n",p1);
    }
    return 0;
}


