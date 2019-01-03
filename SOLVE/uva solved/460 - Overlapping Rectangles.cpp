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
    int t,x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        a=max(x1,x3);
        b=max(y1,y3);
        c=min(x2,x4);
        d=min(y2,y4);
        if(a>=c||b>=d)
        {
            printf("No Overlap\n");
        }
        else
        {
            printf("%d %d %d %d\n",a,b,c,d);
        }
           if(t>0)
           printf("\n");
    }
    printf("a");
}
