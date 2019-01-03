#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
     int t,n,i,j,r[100],p,z;
    scanf("%d",&t);
    for(z=1;z<=t;z++)
    {
        j=0;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        if(n>=1&&n<=9)
        {
            printf("%d\n",n);
            continue;
        }
        memset(r,0,sizeof(r));

   while(n>=10){
       p=1;

    for(i=9;i>=2;i--)
    {

            if(n%i==0)
            {
                r[j++]=i;
                n=n/i;
                p=0;
                break;
            }
}
if(p==1)
break;
   }


    if(p==1)
    {
        printf("-1\n");
    }
    else
    {
        r[j++]=n;
        sort(r,r+j);
        for(i=0;i<j;i++)
        {
            printf("%d",r[i]);
        }
        printf("\n");
    }

}
return 0;
    }
