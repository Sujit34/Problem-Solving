#include<stdio.h>
#include<string.h>

int main()
{

    long long int  n,t,i,arr[25],count=1,sum=1,a[30];
    int p;
    for(i=1;i<=20;i++)
        {
            sum=sum*i;
            arr[i]=sum;
        }
    scanf("%lld",&t);
    getchar();

    while(t--)
    {

        char str[25],c;
        gets(str);
        n=strlen(str);
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {

            c=str[i];
            p=(c-'0');
            p=p-16;
            a[p]++;
        }
        sum=1;
        for(i=1;i<=26;i++)
        {
            if(a[i]>0)
            {
                sum=sum*arr[a[i]];
            }
        }

        printf("Data set %lld: %lld\n",count++,(arr[n]/sum));


     }
    return 0;
}



