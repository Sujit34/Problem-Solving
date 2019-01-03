#include<stdio.h>
int main()
{
    int n,p,q,a[30],i,sum,count,T,j;
    while(scanf("%d",&T)==1){
        for(j=1;j<=T;j++){
    scanf("%d%d%d",&n,&p,&q);
    {
        sum=0;count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

     for(i=0;i<p&&i<n;i++){
    sum=sum+a[i];
      if(sum<=q){
          count++;
          }
          else{break;}}}
      printf("Case %d: %d\n",j,count);


}}
return 0;}
