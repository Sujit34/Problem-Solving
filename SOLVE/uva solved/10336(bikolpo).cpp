#include<stdio.h>
#include<string.h>
char s[100][100],c;
void dfs(int x,int y)
{
     s[x][y]='0';
     if(s[x+0][y+1]==c)
     {
         dfs(x+0,y+1);
     }
     if(s[x+0][y-1]==c)
     {
         dfs(x+0,y-1);
     }
     if(s[x+1][y+0]==c)
     {
         dfs(x+1,y+0);
     }
     if(s[x-1][y+0]==c)
     {
         dfs(x-1,y+0);
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

		for ( i = 1; i <= h; i++ ) {
			j = 1;
			while ( j <= w )
				scanf ("%c", &s [i] [j++]);
			scanf ("%c", &c);
		}
   for ( i = 1; i <= h; i++ ) {
			for ( j = 1; j <= w; j++ ) {
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
