#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,ar[10];
    cin >> a >> b >>c;
    ar[0]=a+b+c;
    ar[1]=a*b*c;
    ar[2]=a+b*c;
    ar[3]=a*b+c;
    ar[4]=(a+b)*c;
    ar[5]=a*(b+c);
    sort(ar,ar+6);
    cout << ar[6-1];
}
