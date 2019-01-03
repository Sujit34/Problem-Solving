#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[10000],c,i,p,j=1;
    while(scanf("%d",&n)==1){
        if(n==0)
        {
            return 0;
        }

        c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    p=n-c;
    printf("Case %d: %d\n",j++,p-c);}
    return 0;
}

