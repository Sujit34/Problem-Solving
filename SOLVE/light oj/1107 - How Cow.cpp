#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi acos(-1.0)
#define EPS 1e-9
using namespace std;
int main()
{
    int t;
    int x1,y1,x2,y2;
    int m;
    int x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        while(m--)
        {
            cin>>x>>y;
            if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }

    }
}
