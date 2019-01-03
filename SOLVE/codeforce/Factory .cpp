#include<iostream>
using namespace std;
int main()
{
    long long int a,m,p,q=0,t=0,n;
    cin >> a >> m;
    n=m;
    while(n--)
    {
    p=a%m;
    q=p+a;
    a=q;
    if(q%m==0)
    {
        cout << "Yes";

        t=1;
        break;
    }
    }


    if(t==0)
    {
        cout << "No";

    }
}
