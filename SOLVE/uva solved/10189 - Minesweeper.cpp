#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j,c=1,t;
    char s[105][105];
    t=1;
    while(scanf("%d %d",&n,&m)==2)
    {

                getchar();

        if(n==0&&m==0)
        {
            break;
        }
        if(t>1)
        {
            printf("\n");
        }
        printf("Field #%d:\n",c++);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%c",&s[i][j]);
            }
            getchar();
        }
        for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++)
            {
              int result = 0;
              if(s[i][j]=='.'){
                    if (i && s[i-1][j] == '*')
                        result ++;
                    if (j && s[i][j-1] == '*')
                        result ++;
                    if (j < m-1 && s[i][j+1] == '*')
                        result ++;
                    if (i < n-1 && s[i+1][j] == '*')
                        result ++;
                    if (i && j && s[i-1][j-1] == '*')
                        result ++;
                    if (i && j < m-1 && s[i-1][j+1] == '*')
                        result ++;
                    if (j && i < n-1 && s[i+1][j-1] == '*')
                        result ++;
                    if (i < n-1 && j < m-1 && s[i+1][j+1] == '*')
                        result ++;
                    printf("%d",result);
              }

                else if(s[i][j]=='*')
                {printf("*");}
            }
            printf("\n");
        }

t++;
    }
    return 0;
}
