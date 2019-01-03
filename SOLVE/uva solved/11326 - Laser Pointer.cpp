#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<map>


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

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    /*qsort(a,n,sizeof(int),compare);*/
    double t,l,w,theta,A,B,a,b,op,ox,ratio,p;
    int c;
    cin>>t;
    while(t--)
    {
        cin>>l>>w>>theta;
        if(theta==0)
        {
            printf("1.000\n");

        }
        else
        {
            theta=(pi*theta)/180;
        c=1;
        op=w/tan(theta);
        while(op*c<=l)
        {
            ++c;
        }

        ox=w/sin(theta);
        A=ox*(c-1);
        a=l-(op*(c-1));



        p=a/cos(theta);
        A=A+p;




      if (c % 2 == 0) b = w- a*tan(theta);
      else b = a*tan(theta);

      B=sqrt((l*l)+(b*b));



        ratio=A/B;
        printf("%.3lf\n",ratio);


        }

    }




}
