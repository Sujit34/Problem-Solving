#include<cstdio>
#include<iostream>
#include<algorithm>
int a[1000001];
using namespace std;
int main()
{
    int n,i,p=0,t=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            p=p+a[i];
        }
        if(p<1&&a[i]==-1)
        {
            t++;
        }
        if(p>0&&a[i]==-1)
        {
            p=p+a[i];
        }

    }
    cout << t;

}
