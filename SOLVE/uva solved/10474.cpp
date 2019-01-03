#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,a[10001],i,d,t,p,l,u,mid,q,c,z=1;
    while(scanf("%d %d",&n,&p)==2){
        if(n==0&&p==0)
        {
            return 0;
        }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
        printf("CASE# %d:\n",z);
        while(p-->0)
        {c=0;
            scanf("%d",&m);
            l=0,u=n-1;
    while(l!=u){
         mid=(l+u)/2;

          if(a[mid]<m){
             l=mid+1;
         }
         else
             u=mid;
    }
    if(a[u]==m)
         printf("%d found at %d\n",m,l+1);
    else
         printf("%d not found\n",m);

        }
        z++;
        }
        return 0;
}

