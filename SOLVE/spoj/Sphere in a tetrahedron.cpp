#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<vector>
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
    int t;
    double u,v,w,U,V,W,x,y,z,X,Y,Z,a,b,c,d,s1,s2,s3,s4,A1,A2,A3,A4,R,volume;
    cin>>t;
    while(t--)
    {
       cin>>u>>v>>w>>W>>V>>U;



       volume = 4*u*u*v*v*w*w-(u*u*pow(v*v+w*w-U*U,2))-(v*v*pow(w*w+u*u-V*V,2))-(w*w*pow(u*u+v*v-W*W,2))+((v*v+w*w-U*U)*(w*w+u*u-V*V)*(u*u+v*v-W*W));
       volume=sqrt(volume)/12;




        s1=(u+W+v)/2;
        s2=(U+w+v)/2;
        s3=(u+w+V)/2;
        s4=(U+V+W)/2;

        A1 = sqrt(s1*(s1-u)*(s1-v)*(s1-W));
        A2 = sqrt(s2*(s2-U)*(s2-w)*(s2-v));
        A3 = sqrt(s3*(s3-u)*(s3-w)*(s3-V));
        A4 = sqrt(s4*(s4-U)*(s4-V)*(s4-W));


        R=(3*volume)/(A1+A2+A3+A4);


        printf("%.4lf\n",R);







    }







}
