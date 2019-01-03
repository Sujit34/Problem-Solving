#include<stdio.h>
#include<algorithm>
using namespace std;
long long int a[100001];
int main()
{
    long long int i,j,n,x,sum=0,sum1=0;
    scanf("%lld %lld",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    sum=a[0]*x;
    for(i=1;i<n;i++)
    {

        if(x-1>0){
           sum1=sum1+(a[i]*(x-1));
           x=x-1;
        }
        else
        {
          sum1=sum1+(a[i]*(x));
        }
    }
    printf("%lld\n",sum+sum1);

return 0;
}
