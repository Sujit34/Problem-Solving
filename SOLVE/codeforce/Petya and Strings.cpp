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
    string str1;
    string str2;
    int l,a=0,b=0,flag=0;
    cin>>str1>>str2;
    l=str1.size();
    for(int i=0;i<l;i++)
    {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    for(int i=0;i<l;i++)
    {
        if(str1[i]>str2[i])
        {
            printf("1\n");
            flag=1;
            break;
        }
        else if(str1[i]<str2[i])
        {
            printf("-1\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("0\n");
    }

}

