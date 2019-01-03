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

    int t,k;
    double L,N,C,up,low,theta1,theta2,res,a,b,r,L1,mid;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>L>>N>>C;
        L1=(1+N*C)*L;
        up=2*pi;low=0;

        while(fabs(up-low)>eps)
        {
            mid=(low+up)/2;
            theta1=mid;

            r=(L/2)/sin(theta1/2);
            if(r*theta1<L1)
            {
                low=theta1;
            }
            else
            {
                up=theta1;
            }
        }


            a=(L/2);
            b=sqrt((r*r)-(a*a));
            res=(r-b);

        printf("Case %d: %.9lf\n",k,res);


    }





}
