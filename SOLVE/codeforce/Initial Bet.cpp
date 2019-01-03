#include<stdio.h>
int main()
{
    int n,a1,a2,a3,a4,a5;
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    n=a1+a2+a3+a4+a5;
    if(n%5==0&&n>0)
    {
        printf("%d\n",n/5);
    }
    else
    {
        printf("-1\n");
    }
}
