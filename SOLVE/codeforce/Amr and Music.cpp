#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<vector>
#define LLI long long int
#define ULL unsigned long long
#define pi acos(-1.0)
#define eps 1e-9
#define CLR(a) memset(a,0,sizeof(a))
#define repi(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
template< class T > inline T sq(T a) { return a * a; }
template< class T, class X > inline T _pow(T a,X y) {T z=1; repi(i,1,y){z*=a;} return z; }
template< class T > inline T gcd(T a, T b) {while(b) b ^= a ^= b ^= a %= b;return a;}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}

/*int compare(const  *a,const *b){
	return *(int *)b- *(int *)a;
}*/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    /*qsort(a,n,sizeof(int),compare);*/
    int n,k,i,j,a[105],c[105],b[105];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }


    sort(b,b+n);
    int sum=0;
    for(i=0,j=0;i<n;i++)
    {
        sum=sum+b[i];

        if(sum==k)
        {
            c[j++]=b[i];
            break;
        }
        else if(sum>k)
        {
            break;
        }
        c[j++]=b[i];

    }
    printf("%d\n",j);
    for(i=0;i<j;i++)
    {
        for(int l=0;l<n;l++)
        {
            if(c[i]==a[l])
            {
               printf("%d ",l+1);
               a[l]=0;
               break;

            }
        }
    }


}
