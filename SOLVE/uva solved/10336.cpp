#include<stdio.h>
#include<string.h>
char s[100][100],c;
void dfs(int x,int y)
{
int xx,yy,R[]={0,0,1,-1},C[]={1,-1,0,0};
s[x][y]='0';
for(int i=0;i<4;i++){
xx=x+R[i];
yy=y+C[i];
if(s[xx][yy]==c)
{
dfs(xx,yy);
}

}
}

int main()
{
int t;
int p=1;
scanf("%d",&t);
while(t-->0){
int i,j,alph[26];
memset(alph,0,sizeof(alph));

int h, w;

scanf ("%d %d", &h, &w);
getchar();


for(i=0;i<h;i++)
{for(j=0;j<w;j++)
{scanf("%c",&s[i][j]);}
getchar();}
for ( i = 0; i < h; i++ ) {
for ( j = 0; j < w; j++ ) {
if ( s [i] [j] != '0' ) {
c = s [i] [j];
alph [s [i] [j] - 'a']++;
dfs(i , j);
}
}
}

int max;
int index;

printf("World #%d\n", p++);

for(j=0;j<26;j++)
{max=0;
for(i=0;i<26;i++)
{
if(max<alph[i])
{max=alph[i];
index=i;}
}
if(alph[index]>0)
{printf("%c: %d\n",index+'a',alph[index]);
alph[index]=0;}}
}
return 0;
}


