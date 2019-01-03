#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,res[1001],p,q,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&p,&q);
        sum=sum+(q-p);
        res[i]=sum;
    }
    sort(res,res+n);
    printf("%d\n",res[n-1]);
}
