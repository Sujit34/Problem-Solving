#include<stdio.h>
int f91(int n)
{
    if(n>=101)
    {
        n=n-10;
        return n;
    }
    else return f91(f91(n+11));
}
int main()
{
    int n,k;
    while(scanf("%d",&n)==1)
    {if(n==0)
    return 0;
    else{
        k=f91(n);
        printf("f91(%d) = %d\n",n,k);}
    }
}

