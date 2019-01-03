#include<stdio.h>
int main()
{
    long long int n1,n2;
    int r,r1,a,a1,s,count;
    while(scanf("%lld %lld",&n1,&n2)==2)
    {if(n1==0&&n2==0)
    return 0;
    else
        {s=0;count=0;
        while(n1||n2)
        {r=n1%10;r1=n2%10;
        s=s+r+r1;
        if(s>=10)
        {
            count++;s=1;
        }
        else{s=0;}
            a=n1/10;a1=n2/10;
            n1=a;n2=a1;

}
        if(count==0)
        printf("No carry operation.\n");
        else if(count==1)
        printf("%d carry operation.\n",count);
        else
        printf("%d carry operations.\n",count);

    }

    }
    return 0;
}

