#include<stdio.h>
int main()
{
    int a,b,c,i,T;
    while(scanf("%d",&T)==1)
   {for(i=1;i<=T;i++){
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c)
    printf("Case %d: %d\n",i,b);
    else if(a>c&&c>b)
    printf("Case %d: %d\n",i,c);
    else if(b>a&&a>c)
    printf("Case %d: %d\n",i,a);
    else if(b>c&&c>a)
    printf("Case %d: %d\n",i,c);
    else if(c>b&&b>a)
    printf("Case %d: %d\n",i,b);
    else if(c>a&&a>b)
    printf("Case %d: %d\n",i,a);}}
    return 0;
}

