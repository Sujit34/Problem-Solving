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



int phi(int i)
{
    int res;
    int j;
    if (i==1) return 1;
        res=i;
        if (i%2==0)
        {
        res-=res/2;
        do i/=2; while (i%2==0) ;
        }

          for (j=3; j*j<=i; j+=2)
    {
        if (i%j==0)
        {
            res-=res/j;
            do i/=j; while (i%j==0) ;
        }
    }
    if (i>1) res-=res/i;
    return res;
}

long long int a[200005],i,sum,p;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    /*qsort(a,n,sizeof(int),compare);*/
    a[0]=0;
    a[1]=2;
    a[2]=3;
   for(int i=3;i<=200000;i++)
{
    a[i]=a[i-1]+(phi(i));

}

//printf("%lld",i);
long long int mul,div,n,prod,k;
 while(scanf("%lld",&n)!=EOF&&n!=0)
    {
        int lo=0,hi=200000,mid=(lo+hi)/2;

        while(lo<=hi)
        {
            if(a[mid]<n)
                lo=mid+1;
            else
                hi=mid-1;
            mid=(lo+hi)/2;
        }

int den=hi+1;

long long int num=a[hi];

int ne;

for( ne=0;ne<=n;ne++)
{
    if(gcd(ne,den)==1)

        {num++;}

if(num==n)
    break;

}



        printf("%d/%d\n",ne,den);

   }

}
