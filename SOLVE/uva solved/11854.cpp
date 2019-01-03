#include<stdio.h>
int main()
{   int a,b,c,d,e,f;
    while(scanf("%d%d%d",&a,&b,&c))
    {
    if(a==0&&b==0&c==0)
    return 0;
    else{
    d=a*a;
    e=b*b;
    f=c*c;
    if(d==e+f)
    printf("right\n");
    else if(e==d+f)
    printf("right\n");
    else if(f==e+d)
    printf("right\n");
    else
    printf("wrong\n");}}
    return 0;
}
