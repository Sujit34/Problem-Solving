#include<stdio.h>
#include<string.h>
int main()
{int i,j,c=0;
char a[]={"1234567890-=qwertyuiop[]\zxcvbnm,./asdfghjkl;'"};
char b[200];

gets(b);
for(i=0;i<strlen(b);i++)
{for(j=0,c=0;j<strlen(a);j++)
{if(b[i]==a[j])
{printf("%c",a[j-2]);
c++;}
}
if(c==0)
printf("%c",b[i]);
}
printf("\n");



return 0;
}
