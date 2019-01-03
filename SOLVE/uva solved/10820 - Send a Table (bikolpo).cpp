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



int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    /*qsort(a,n,sizeof(int),compare);*/
    int n,p,sum;
    while(cin>>n)
    {
        sum=0;
        if(n==0)
        {
            break;
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                p=phi(i);
                sum=sum+p;
            }
            printf("%d\n",sum*2-1);
        }


    }
    return 0;

}
