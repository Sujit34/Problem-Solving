#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,T,res,i,j,d,w;
    while(scanf("%lld",&T)==1)
   {
       for(j=1;j<=T;j++){res=0;
        scanf("%lld",&n);
        d=sqrt(n);
     for(  i = 1; i<= d; i++ ){
            res = (res + n/i);}
            w=res*2-d*d;
            printf("%lld\n",w);
      }


}
return 0;}

