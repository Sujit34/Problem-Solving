
#include<stdio.h>
#include<bits/stdc++.h>

#define inf 1<<30


using namespace std;

int sid[12439];


int main()
{
    double x,y,xx,yy,r,maxi=-inf;
    double tem;
    double dist;
    long long int ans;
    cin>>r>>x>>y>>xx>>yy;



    dist=sqrt((xx-x)*(xx-x)+(yy-y)*(yy-y));

    ans=dist/(r*2);

    if(ans*(r*2)!=dist)
    {
        ans=ans+1;
    }


    cout<<ans;



    return 0;
}
