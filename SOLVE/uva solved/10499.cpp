#include<stdio.h>
int main()
{

   long long int n, p;
    while(scanf("%lld",&n)==1){
    if(n<0)
    {
        return 0;
    }
    else
    {
        if(n==1)
        {
            printf("0%%\n");
        }
        else{
        p=n*25;
        printf("%lld%%\n",p);
        }
    }
    }
    return 0;
}
