#include<stdio.h>
int main()
{
    int n,l1,r1,l2,r2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
        int a=(l1+r1)/2;
        int b=(l2+r2)/2;

        if(a==b){b=b+1;}
        printf("%d %d\n",a,b);
    }



}
