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

    int t,i;
    double diagonal,r,l,w,arc_len,theta,a,b,up,low;
    char s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>s>>b;
        up=400;low=0;
        while(fabs(up-low)>eps)
        {

            w=(low+up)/2;
            l=((a/b)*w);

            diagonal=sqrt((w*w)+(l*l));
            r=diagonal/2;
            theta=(2*r*r-w*w)/(2*r*r);
            theta=acos(theta);
            arc_len=r*theta;
            if(2*l+2*arc_len>400)
            {
                up=w;
            }
            else
            {
                low=w;
            }


        }
        printf("Case %d: %.9lf %.9lf\n",i,l,w);
    }



}
