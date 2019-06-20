#include<stdio.h>
int main()
{
    char str[300005];
    int n,flag;
    while(scanf("%d",&n)==1)
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            scanf("%c",&str[i]);
        }
        flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(str[i]>str[i+1])
            {
                printf("YES\n");
                printf("%d %d\n",i+1,i+2);
                flag=1;
                break;
            }
        }
        if(flag==0){printf("NO\n");}
    }
}
