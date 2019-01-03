#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,gap,prime[80000],count=2,p,n;
    prime[0]=2; prime[1]=3;
    for(i=5,gap=2;i<1000000;i=i+gap,gap=6-gap)
    {p=1;
        for(j=2;j<sqrt(i);j++)
        {   if(i%j==0)
            {p=0;  break;}
        }
        if(p==1)
        {prime[count++]=i;}
    }
    while(scanf("%d",&n)==1)
    {
        if(n<0)
        {
            printf("-1 x ");
            n=-1*n;
        }
        for(i=0;i<count;i++)
        {
            while(n%prime[i]==0)
            {
                printf("%d",prime[i]);
                n=n/prime[i];
                if(n>1)
                printf(" x ");
            }
            if(n==1)
            {
                break;
            }
        }
        if(n>1)
        {
            printf("%d\n",n);

        }
        //printf("\n");
    }}
