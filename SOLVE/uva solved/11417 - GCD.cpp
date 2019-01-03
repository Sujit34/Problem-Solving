#include<stdio.h>
int main()
{
    int i,j,N,G,n1,n2;
while(scanf("%d",&N)==1){
    G=0;
    if(N==0)
    {
        return 0;
    }
for(i=1;i<N;i++)
{
    for(j=i+1;j<=N;j++)
    {
        n1=i;
        n2=j;
        while(n1 != n2)
     {
      if(n1 > n2)
       n1 = n1 - n2 ;
      if(n2 > n1)
       n2 = n2 - n1 ;
     }
     G=G+n1;
    }
}
printf("%d\n",G);
}
return 0;
}
