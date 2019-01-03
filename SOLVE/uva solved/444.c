#include<stdio.h>
#include<string.h>
int main()
{
    int l,m,i,j,b,k;
    char s[1000],s1[1000];
    while(gets(s))
    {l=strlen(s);
    m=0;
    if(s[0]-'0'>=0&&s[0]-'0'<=9)
    {

            for(i=l-1,k=0;i>=0;i--)
            {
                s1[k]=s[i];
                k++;
            }
            for (i=0;i<l;i++)
            {
                m = m*10+s1[i]-'0';
                if ((m>=65&&m<=90)||(m>=97&&m<=122)||m==32||m==33||m==44||m==46||m==58||m==59||m==63)
                {
                    printf("%c",m);
                    m=0;
                }
               }

}

else
   {for (i = l-1;i>=0;i--)
            {
                int j=s[i];
                while(j>0)
                {
                    b=j%10;
                    printf("%d",b);
                    j=j/10;

                }
            }}printf("\n");
}
return 0;
}

