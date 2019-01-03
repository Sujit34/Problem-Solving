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
#define CLR(a) memset(a,0,sizeof(a))
#define repi(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
template< class T > inline T sq(T a) { return a * a; }
template< class T, class X > inline T _pow(T a,X y) {T z=1; repi(i,1,y){z*=a;} return z; }
template< class T > inline T gcd(T a, T b) {while(b) b ^= a ^= b ^= a %= b;return a;}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    double a,b,c,d,e,h,s,area,area1,total_area,temp;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        if(c>a)
        {
            temp=a;
            a=c;
            c=temp;
        }
         e=a-c;
         //cout<<e;

        s=(b+d+e)/2;
        area=sqrt(s*(s-b)*(s-d)*(s-e));
        //cout<<area;
        h=(area*2)/e;
        //cout<<h;
        area1=h*c;
        total_area=area+area1;
        printf("Case %d: %lf\n",i,total_area);





    }
}
