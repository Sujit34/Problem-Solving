#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,a,b,p,q,r,ar[3];
    scanf("%d%d%d%d",&n,&m,&a,&b);
    if(n%m==0)
    {
        p=(n/m)*b;
    }
    if(n%m!=0)
    {
        p=((n/m)*b)+((n%m)*a);
    }
    if(n%m!=0)
    {
        r=((n/m)+1)*b;
    }
    q=n*a;
    ar[0]=p;ar[1]=q;ar[2]=r;
    sort(ar,ar+3);
    printf("%d",ar[0]);

}
