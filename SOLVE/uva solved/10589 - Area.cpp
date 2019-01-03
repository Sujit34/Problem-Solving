#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define LLI long long int
#define ULL unsigned long long
#define PI acos(-1.0)
#define EPS 1e-9
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;
template< class T > inline T sq(T a) { return a * a; }
template< class T > inline T gcd(T a, T b) {while(b) b ^= a ^= b ^= a %= b;return a;}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
int main()
{

    double x,y,count=0,result,d1,d2,d3,d4,n,a,i;
    while(cin>>n)
    {
       cin>>a;count=0;
       if(n==0)
       {
           return 0;
       }
       for(i=0;i<n;i++)
    {
        cin>>x>>y;
        d1=sqrt(((x-0)*(x-0))+((y-0)*(y-0)));
        d2=sqrt(((x-0)*(x-0))+((y-a)*(y-a)));
        d3=sqrt(((x-a)*(x-a))+((y-0)*(y-0)));
        d4=sqrt(((x-a)*(x-a))+((y-a)*(y-a)));
        if(d1<=a&&d2<=a&&d3<=a&&d4<=a)
        {
            count++;
        }
   }

   result=(count*a*a)/n;
   printf("%.5lf\n",result);
    }

}
