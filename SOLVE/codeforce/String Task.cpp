#include<stdio.h>
#include<string.h>
#include<cctype>
using namespace std;
int main()
{
    int i,l;
    char a[1001];
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]<'a')
        {
            a[i]=tolower(a[i]);
        }
        if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != 'y')
        {
            printf(".");
            printf("%c",a[i]);
        }
    }
}
