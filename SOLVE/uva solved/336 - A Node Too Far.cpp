#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>


#define LLI long long int
#define ULL unsigned long long
#define pi acos(-1.0)
#define eps 1e-9
#define CLR(a) memset(a,0,sizeof(a))
#define repi(i,a,b) for(int i=a;i<=b;i++)
#define MAX 100000

using namespace std;

template< class T > inline T sq(T a) { return a * a; }
template< class T, class X > inline T _pow(T a,X y) {T z=1; repi(i,1,y){z*=a;} return z; }
template< class T > inline T gcd(T a, T b) {while(b) b ^= a ^= b ^= a %= b;return a;}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}

/*int compare(const  *a,const *b){
	return *(int *)b- *(int *)a;
}*/

vector<long long>g[MAX];
map<long long,int>visited;
map<long long,int>node;
map<long long,int>level;
queue<long long>Q;


long long  BFS(long long  src,long long ttl)
{

    Q.push(src);
    visited.clear();
    visited[src]=1;
    level[src]=0;

    long long count=0,v,i;

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();

        for( i=0;i<g[u].size();i++)
        {
            v=g[u][i];
            if(visited[v]!=1)
            {
                level[v]=level[u]+1;
                if(level[v]>ttl)
                {

                    break;
                }
                count++;


                visited[v]=1;
                Q.push(v);
            }
        }


    }

    return count;
}









int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    /*qsort(a,n,sizeof(int),compare);*/
    long long  e,i,dif=0,j=1,s,d,src,ttl,p;
    while(cin>>e)
    {
        if(e==0)
        {
            break;
        }
        level.clear();
        node.clear();

        for(i=0;i<99900;i++)
        {
           g[i].clear();
        }

        dif=0;
        for(i=0;i<e;i++)
        {
            cin>>s>>d;
            g[s].push_back(d);
            g[d].push_back(s);

            if(node[s]!=1)
            {
                node[s]=1;
                dif++;
            }
            if(node[d]!=1)
            {
                node[d]=1;
                dif++;
            }
        }



        while(cin>>src>>ttl)
        {
            if(src==0&&ttl==0)
            {
                break;
            }
             p=BFS(src,ttl);

               printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",j++,dif-p-1,src,ttl);



        }


    }


}
