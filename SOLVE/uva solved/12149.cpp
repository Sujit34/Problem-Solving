#include<stdio.h>
int main()
{
    int n,i,s;
    while(scanf("%d",&n)==1){
        s=0;
        if(n==0)
        {
            return 0;
        }
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    printf("%d\n",s);
    }
    return 0;

}

