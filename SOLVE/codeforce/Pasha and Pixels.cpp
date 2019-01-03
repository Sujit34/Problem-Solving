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
int arr[1005][1005],arr1[100005],arr2[100005];
int main()
{
 int n,m,k,a,b,i,j,count=0,move=0,l,br=1;
    cin>>n>>m>>k;
    memset(arr,0,sizeof(arr));
    for(l=0;l<k;l++)
    {
        cin>>a>>b;
        arr[a][b]=1;
        i=a;
        j=b;

          if(arr[i+0][j+1]==1&&arr[i-1][j+1]==1&&arr[i+0][j+0]==1&&arr[i-1][j+0]==1)
            {
                count++;
            }
            if(count==1)
            {
                if(br==1)
                {
                    move=l+1;
                }
                br=0;
            }
            count=0;
            if(arr[i+0][j+0]==1&&arr[i+0][j-1]==1&&arr[i-1][j-1]==1&&arr[i-1][j+0]==1)
            {
                count++;
            }

            if(count==1)
            {
                if(br==1)
                {
                    move=l+1;
                }
                br=0;
            }
            count=0;
            if(arr[i+0][j+1]==1&&arr[i+1][j+1]==1&&arr[i+0][j+0]==1&&arr[i+1][j+0]==1)
            {
                count++;
            }

            if(count==1)
            {
                if(br==1)
                {
                    move=l+1;
                }
                br=0;
            }

            count=0;
            if(arr[i+0][j+0]==1&&arr[i+1][j+0]==1&&arr[i+0][j-1]==1&&arr[i+1][j-1]==1)
            {
                count++;
            }
            if(count==1)
            {
                if(br==1)
                {
                    move=l+1;
                }
                br=0;
            }

    }
    cout<<move<<endl;



}
