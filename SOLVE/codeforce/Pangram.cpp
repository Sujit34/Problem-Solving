#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,n,arr[100],a;
    char str[105];
    memset(arr,0,sizeof(arr));
    cin>>n;
    getchar();
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]>96)
        {
            a=str[i]-'a';
            arr[a]++;
        }
        if(str[i]>64&&str[i]<91)
        {
            a=str[i]-'A';
            arr[a]++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;



}
