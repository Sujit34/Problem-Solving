#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char str[105];
    int n,l;
    cin>>n;
    while(n--)
      {
        cin>>str;
        l=strlen(str);
        if(l>10)
         {
           cout<<str[0];
           cout<<(l-2);
           cout<<str[l-1];
         }
         else
         {
             cout<<str;
         }
         printf("\n");
      }
}
