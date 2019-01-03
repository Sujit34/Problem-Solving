/*Logic--

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
    int count=1;
    while(cin>>a>>b>>c)
    {
        if(a==-1)
        {
            return 0;
        }
        p=a*c/b;
        if(b*b<=a*c)
        {
            printf("Set %d:\n",count++);
            printf("Poor King!\n");
        }
        else
        {
            q=((p+c)*(a+p))/(b-p);
             printf("Set %d:\n",count++);
            printf("%.4lf\n",p+q);
        }

    }

}















/*
another way--
Logic--
// Connect the line segment AX and quadrilateral AEXF is divided into
// two pieces: triangle AEX and triangle AFX.
//
// Let x = [AEX], area of triangle AEX; y = [AFX], area of triangle AFX.
//
// (1) On the line segment BE:
// [ABX] : [AEX] = BX : EX = [CBX] : [CEX]
// <=> (a+y) : x = b : c <=> bx = c(a+y).
//
// (2) On the line segment CF:
// [AFX] : [ACX] = FX : CX = [BFX] : [BCX]
// <=> y : (c+x) = a : b <=> by = a(c+x).
//
// By (1)(2), solve x and y in terms of a, b, c.
// The result will be x+y = ac(a+2b+c)/(b^2 - ac) if b^2 - ac > 0.
//
// Note that a and c are symmetric.  So if we exchange a and c,
// the result will not be changed (sanity check).


#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[])
{
    double a;
    double b;
    double c;

    int set_id = 1;
    while (std::cin >> a >> b >> c)
    {
        if (a == -1.0)
        {
            break;
        }

        printf("Set %d:\n", set_id);
        if (b*b <= a*c)
        {
            printf("Poor King!\n");
        }
        else
        {
            double d = a*c*(a + 2*b + c)/(b*b - a*c);
            printf("%.4lf\n", d);
        }
        set_id++;
    }

    return 0;
}


*/
