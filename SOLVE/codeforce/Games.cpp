#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,a[100],b[100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int count=0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }
    cout<<count;
}
