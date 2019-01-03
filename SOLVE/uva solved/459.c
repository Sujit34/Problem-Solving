#include<stdio.h>
#include<string.h>

int ar[30][30],cr[100];
char s[100],ch[1];

int nod,u,v;
void f(int i);
int main()
{int comp,t;
scanf("%d",&t);
scanf("\n");
while(t--){comp=0;
gets(ch);
nod=ch[0]-'A';

memset(ar,0,sizeof(ar));
while(gets(s)&&s[0]){

u=s[0]-'A';
v=s[1]-'A';

ar[u][v]=1;
ar[v][u]=1;
}

memset(cr,0,sizeof(cr));
for(int i=0;i<=nod;i++)
{
if(cr[i]==0)
{
f(i);
comp++;
}

}
printf("%d\n",comp);
if(t)
{printf("\n");}}

return 0;
}
void f(int i)
{
if(cr[i]!=1)
{cr[i]=1;
for(int j=0;j<=nod;j++)
{
if(ar[i][j]==1)
f(j);
}

}

}

