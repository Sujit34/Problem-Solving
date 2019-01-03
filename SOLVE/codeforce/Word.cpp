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
    string s;
    cin>>s;
    int l,upper=0,lower=0;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]>96)
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(upper>lower)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]>96)
            {
                s[i]=toupper(s[i]);
            }
        }
    }
    else if(lower>upper)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]<96)
            {
                s[i]=tolower(s[i]);

            }
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;

}
