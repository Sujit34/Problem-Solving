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

int div_phi(int n,int r)
{
   int phi,divi,ans,result;
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

       result=r-(phi+(divi-1));
       printf("%d\n",result);


}
int main()
{
    int n,r;

    while(cin>>n)
    {
       r=n;
        div_phi(n,r);
    }


}





