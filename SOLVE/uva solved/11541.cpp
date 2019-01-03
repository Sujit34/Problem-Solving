
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,sum,l;
     char s[200];char a;
    while(scanf("%d",&n)==1){
        getchar();
        for(i=1;i<=n;i++){printf("Case %d: ",i);
      gets(s);
    for(j=0;j<strlen(s);j++)
    {if(s[j]>='A'&&s[j]<='Z')
    {a=s[j];
    sum=0;
            for(k=j+1;k<strlen(s);k++) {
            { if (s[k]>='0'&&s[k]<='9')
            { sum=sum*10+s[k]-'0';
            j++;}
            else
            break;
        }
    }
    for(l=1;l<=sum;l++){
    printf("%c",a);}}

}printf("\n");

}
}return 0;}
