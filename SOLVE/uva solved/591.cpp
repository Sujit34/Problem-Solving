#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[100],i,sum,p,s,j=1;
    while(scanf("%d",&n)==1){

        if(n==0)
        {
            return 0;
        }
        sum=0;s=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    p=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>p)
        {
            s=s+(a[i]-p);
        }
    }
    printf("Set #%d\n",j++);
    printf("The minimum number of moves is %d.\n\n",s);

    }
    return 0;
}


