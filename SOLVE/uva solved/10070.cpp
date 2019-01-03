#include<stdio.h>
#include<string.h>
int main()
{char s[100000];
int l,i,f,m,mod,mod1,mod2,mod3,mod4,line=0;
while(gets(s)){
mod=0;mod1=0;mod2=0;mod3=0;mod4=0;f=0;
l=strlen(s);m=0;
    for(i=0;i<l;i++)
    {
        mod=mod*10+s[i]-'0';
        mod=mod%400;
        mod1=mod1*10+s[i]-'0';
        mod1=mod1%4;
        mod2=mod2*10+s[i]-'0';
        mod2=mod2%100;
        mod3=mod3*10+s[i]-'0';
        mod3=mod3%15;
        mod4=mod4*10+s[i]-'0';
        mod4=mod4%55;
    }
    if(line>0)
    printf("\n");
    line++;
     if(mod==0||mod1==0&&mod2!=0)
     {printf("This is leap year.\n");
     f=1;m=1;
     }
     if(mod3==0)
    {printf("This is huluculu festival year.\n");
    f=1;}
    if(mod4==0&&m==1)
    {printf("This is bulukulu festival year.\n");
    f=1;}
    if(f==0)
    {printf("This is an ordinary year.\n");}
    }
return 0;
}

