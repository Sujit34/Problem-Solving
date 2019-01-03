#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define LLI long long int
#define ULL unsigned long long
#define pi acos(-1.0)
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

    int t;
    double r1,r2,r3,a,b,c,s,area,arear1,arear2,arear3,A,B,C,totalarea,finalarea;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
       // cout<<area;

        A=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        B=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        C=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
        A=(180*A)/pi;
        B=(180*B)/pi;
        C=(180*C)/pi;
        //cout<<A<<B<<C<<endl;
        arear1=(pi*r1*r1);
        arear1=arear1*(A/360);
        arear2=(pi*r2*r2);
        arear2=arear2*(B/360);
        arear3=(pi*r3*r3);
        arear3=arear3*(C/360);
        totalarea=arear1+arear2+arear3;
        finalarea=area-totalarea;
        //cout<<finalarea<<endl;
        printf("Case %d: %lf\n",i,finalarea);






    }

}
