#include<stdio.h>
int main()
{
    int a,b,n,i,j,c[1000],p=0,t;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        t=0;
        if(n==0)
        {printf("END OF OUTPUT\n");
        break;}
else{
        for(j=1;j<n;j++){
            i=n%j;
            if(i==0)
            {
                c[p]=j;


            t=t+c[p];
            p++;
            }}


       if(t==n)
       printf("%5d  PERFECT\n",n);
       else if(t<n)
       printf("%5d  DEFICIENT\n",n);
       else if(t>n)
       printf("%5d  ABUNDANT\n",n);}


    }
    return 0;
}

