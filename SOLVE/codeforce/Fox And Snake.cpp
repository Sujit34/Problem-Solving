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
    int n,m,flag=1,i,j;
    //char ch[100];
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
       // cin>>ch;
        if(i%2==1)
        {
            for(j=1;j<=m;j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else if(i%2==0&&flag%2==1)
        {
            for(j=1;j<m;j++)
            {
                printf(".");
            }
            printf("#\n");
            flag++;
        }
        else if(i%2==0&&flag%2==0)
        {
            printf("#");
            for(j=1;j<m;j++)
            {
                printf(".");
            }
            printf("\n");
            flag++;
        }


    }




}
