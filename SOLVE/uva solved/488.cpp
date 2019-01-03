#include<stdio.h>
int main()
{
    int n,i,j,k,T,p,l;
    while(scanf("%d",&T)==1){
    for(l=1;l<=T;l++){
    scanf("%d %d",&n,&p);
    for(k=1;k<=p;k++){
    for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
            printf("%d",i);}
    printf("\n");}
    for(i=(n-1);i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
if(l==T&&k==p)
continue;
else
    printf("\n");
}}


}
return 0;}


