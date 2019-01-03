#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;


typedef struct {
    int x,y;
}point;



int main()
{
    int t,n,p,q,r,s,flag,Case=1;
    point a,b,c,d;

    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        cin>>a.x>>a.y>>b.x>>b.y;
        p=a.x;  q=a.y;
        r=b.x;  s=b.y;


        n--;
        while(n--)
        {
            cin>>c.x>>c.y>>d.x>>d.y;
            p=max(a.x,c.x);
            q=max(a.y,c.y);
            r=min(b.x,d.x);
            s=min(b.y,d.y);
            if(p>=r||q>=s)
            {
                flag=1;
            }
            else
            {
                a.x=p;
                a.y=q;
                b.x=r;
                b.y=s;

            }

        }
        if(flag==0)
        {
            printf("Case %d: %d\n",Case++,((p-r)*(q-s)));
        }
        else
        {
            printf("Case %d: 0\n",Case++);
        }
    }

}
