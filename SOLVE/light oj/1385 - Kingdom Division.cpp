/*Logic--
Here's a hint for those who may want one (use pencil and paper to diagram everything):

Split the d area into two triangles. One formed by FEX (we'll call its area p), and one formed by FEA (let's call its area q).

Now, to find the area of p, you can rely on the following information:
The triangle BFX has area a. Let's say that its base is BX, and its height is h1.
Then the base of FXE can be XE, and its height is also h1.
Similarly, the triangle BXC can be said to have base BX and height h2.
And the triangle XEC has base XE and height h2.

Knowing all these relations, and with a little algebra, you can deduce that p = a*c/b.

For the value of q, there are many ways to get it. Use a similar reasoning, and triangles like AFE, AFC, BFE and BFC to deduce q.

*/



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


    double a,b,c,p,q;
    int t,count=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        //count=1;
        if(a==-1)
        {
            return 0;
        }
        p=a*c/b;
        if(b-p<eps)
        {
            printf("Case %d: ",count++);
            printf("-1\n");
        }
        else
        {
            q=((p+c)*(a+p))/(b-p);
             printf("Case %d: ",count++);
            printf("%.8lf\n",p+q);
        }

    }

}
