#include<stdio.h>
int main()
{
    int a[10],n,i,p,s,j,t=1;
    while(scanf("%d",&p)==1)
    {
        for(j=p;j>=1;j--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        s=(n/2);
        printf("Case %d: %d\n",t,a[s]);
        t++;}
        p--;

    }
    return 0;
}
