#include<stdio.h>
int main()
{
    int a,i,b,s,j,n,m;
    while(scanf("%d",&m)==1)
    {for(i=1;i<=m;i++)
    {s=0;
    scanf("%d%d",&a,&b);
    for(j=a;j<=b;j++){
    if(j%2==1)
    s=s+j;
    }
    printf("Case %d: %d\n",i,s);}}
    return 0;
}


