#include<stdio.h>
int main()
{
    int n,m,rem,div;
   while(scanf("%d %d",&n,&m)==2){
    div=n/m;
    printf("[%d;",div);
    rem=n%m;
    n=m;
    m=rem;

    while(rem>1)
    {
        div=n/m;
    rem=n%m;
    printf("%d,",div);
    n=m;
    m=rem;

    }
    printf("%d]\n",n);

   }
    return 0;
}
