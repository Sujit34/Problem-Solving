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
    int n,p,q,flag;
    cin>>n;
    for(int j=4;j<=n;j++)
    {
        p=j;
        q=n-p;
        flag=0;
      for(int i=2;i<=p/2;++i)
        {
            if(p%i==0)
             {
               flag=1;
               break;
             }
        }

            int flag1=0;
      for(int i=2;i<=q/2;++i)
        {
            if(q%i==0)
             {
               flag1=1;
               break;
             }
        }
        if(flag==1&&flag1==1)
        {
            printf("%d %d\n",p,q);
            break;
        }



    }
    return 0;
}

