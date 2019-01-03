#include<stdio.h>
int main()
{
    int n,i,j,l,count,b,f,p,d[1000],e[1000],sum,max;
    char s[1000];
    while(scanf("%d",&n)==1)
    {if(n==0){return 0;}
        getchar();b=0;p=0;sum=0;max=0;
        for(i=1;i<=n;i++)
        {count=0;
            gets(s);
            for(j=0;j<25;j++)
            {
                if(s[j]=='X')
                {
                    count++;
                }
            }
            d[b]=count;
            b++;
            if(count>max){f=count;max=count;}
        }
        for(i=0;i<b;i++)
        {
            e[p]=max-d[i];p++;
        }
        for(i=0;i<p;i++)
        {
            sum=sum+e[i];
        }
        printf("%d\n",sum);


    }
    return 0;
}

