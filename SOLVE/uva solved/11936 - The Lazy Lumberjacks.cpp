#ifndef LAM_CPP_INCLUDED
#define LAM_CPP_INCLUDED

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(x+y>z&&x+z>y&&y+z>x)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"Wrong!!"<<endl;
        }
    }
}

#endif // LAM_CPP_INCLUDED
