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
    int t,a[5];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        sort(a,a+4);
        if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
        {
            printf("square\n");
        }
        else if(a[0]==a[1]&&a[2]==a[3])
        {
            printf("rectangle\n");
        }
        else if(a[0]+a[1]+a[2]>a[3]&&a[0]+a[1]+a[3]>a[2]&&a[1]+a[2]+a[3]>a[0]&&a[0]+a[1]+a[3]>a[2])
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
}
