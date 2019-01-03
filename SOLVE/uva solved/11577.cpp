#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[1000];
    int i, test,len,j,t,max,count[1000];
    scanf("%d",&test);
    getchar();
    for(t=0;t<test;t++)
    {
        max=0;
        for(i=0;i<26;i++)
    {
        s1[i]=i+'a';
    }
     gets(s);
        len=strlen(s);
        memset(count,0,sizeof(count));
        for(i=0; i<26; i++)
        {
            count[i]=0;
            for(j=0; j<len; j++)
            {
                if(s[j]>='A'&&s[j]<='Z')
                {
                    s[j]=s[j]-'A'+'a';
                }
                if(s1[i]==s[j])
                {
                    count[i]++;
                }
            }
            if(max<count[i])
            {
                max=count[i];
            }
        }

        for(i=0; i<26; i++)
        {
            if(count[i]==max)
            {
                printf("%c",s1[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
