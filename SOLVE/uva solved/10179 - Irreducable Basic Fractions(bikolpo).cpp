#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define LLI long long int
#define ULL unsigned long long
#define pi acos(-1.0)
#define eps 1e-9
#define max 50000
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
    LLI n;
    int i,j,l=2,t,prime[8000];
    prime[0]=2;
    prime[1]=3;
    for(i=5;i<=max;i++)
    {
        t=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                t=0;
                break;
            }
        }
        if(t==1)
        {
            prime[l++]=i;
        }
    }


    int primefactor[5000];


    while(scanf("%lld",&n)==1)
    {
        int k=0,flag=0;
        LLI res=n;
        if(n==0)
        {
            break;
        }

        else
        {
            for(j=0;j<l;j++)
            {
                while(n%prime[j]==0)
                {
                    n=n/prime[j];
                    flag=1;
                }
                if(flag==1)
                {
                    primefactor[k++]=prime[j];
                    flag=0;
                }

                if(n==1)
                {
                    break;
                }
            }

            if(n>1)
            {
                primefactor[k++]=n;
            }


            for(j=0;j<k;j++)
            {
                //res=res*(1-(1/primefactor[j]));
                res=res*(primefactor[j]-1);
                res=res/primefactor[j];
            }

           printf("%lld\n",res);
        }
    }

}
