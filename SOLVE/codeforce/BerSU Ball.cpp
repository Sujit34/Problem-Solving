#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,a[101],b[101],i,j,t,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    cin>>m;
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t=b[j]-a[i];
            if(t==-1||t==0||t==1)
            {
                count++;
                b[j]=-5;
                break;
            }
        }
    }
    cout<<count<<endl;
}



