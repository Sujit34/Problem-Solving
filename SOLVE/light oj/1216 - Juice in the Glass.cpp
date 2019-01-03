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
  // freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    double area1,area2,v,r,theta,theta1,a,r1,r2,h,p,b;
    for(int i=1;i<=t;i++)
    {
        cin>>r1>>r2>>h>>p;
        r=(r1-r2)/2;
        a=sqrt((r*r)+(h*h));
       //cout<<a;
        theta=asin(h/a);
       // theta1=(pi-(pi/2))-theta;
        theta=(180*theta)/pi;
        //cout<<theta;
        //cout<<theta;
        theta1=(180-(90+theta));
        //theta=(pi*theta)/180;
        //theta1=(pi*theta1)/180;
        //cout<<theta1;
        //r=(((h-p)/sin(theta))*sin(theta1));
        //cout<<r;
        //b=(h-p)/sin(theta);
        //b=b*sin(theta1);
        //cout<<b;
        a=sin((theta*pi)/180);
        //cout<<a;
        b=sin((theta1*pi)/180);
        //cout<<b;
       // cout<<h-p;
        r=((h-p)/a)*b;
       //cout<<r;


        r=2*r;
        //cout<<r;
       // printf("%lf",r);
        r=r1-r;
        //cout<<r;
        area1=(r*r*pi);
        area2=(r2*r2*pi);
        v=((area1+area2+sqrt(area1*area2))*p)/3;
        //cout<<v<<endl;
        printf("Case %d: %lf\n",i,v);


    }


}
