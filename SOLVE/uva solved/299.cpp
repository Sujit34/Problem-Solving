#include<stdio.h>
int main()
{
    int a[100],n,i,j,b,count,t,d;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {count=0;
            scanf("%d",&b);
            for(j=0;j<b;j++)
            {
                scanf("%d",&a[j]);
            }
            for(j=1;j<b;j++){
                    for(d=b-1;d>=j;d--){
    if(a[d-1]>a[d]){
    t=a[d-1];
    a[d-1]=a[d];
    a[d]=t;
    count++;}}}
    printf("Optimal train swapping takes %d swaps.\n",count);

        }
    }
    return 0;
}
