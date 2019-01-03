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

int divi,ans;
int primefactor[2000001];
int depth[2000001];
int totaldepth[2000001];

/*int div_phi(int n)
{
   phi = divi = 1;
       ans = n;

       for(int i = 2;i <= n / i;++i){
           if(n % i == 0){
               int exp = 0,aux = 1;

               while(n % i == 0){
                   n /= i;
                   aux *= i;
                   ++exp;
               }

               divi *= (exp + 1);
               phi *= (aux - aux / i);
           }
       }

       if(n != 1){
           divi *= 2;
           phi *= n - 1;
       }
       return phi;
}*/



int phi(int n)
{
    int res=n;
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(!(n%i))
            res-=res/i;
        while(!(n%i))
            n/=i;
        if(n==1)
            break;
    }
    if(n>1)
        res-=res/n;
    return res;
}






int main()
{
    int N,n,m,i,j,p,l=2;
    LLI step=0;
    depth[1]=0;
    for(i=2;i<=2000000;i++)
    {
        p=phi(i);
        primefactor[l++]=p;
        n=i;

        n=primefactor[n];
        depth[i]=depth[n]+1;
        totaldepth[i]=totaldepth[i-1]+depth[i];


    }


    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>m>>n;
        printf("%d\n",totaldepth[n]-totaldepth[m-1]);
    }




}

