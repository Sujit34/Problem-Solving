#include<stdio.h>
#include<string.h>
int main()
 { int c,m,w,a,t,b,i,j,r=1;
  char s[12];
  while(scanf("%d",&c)==1){
  for(j=c;j>=1;j--)
  { a=t=w=b=0;
  scanf("%d",&m);
  getchar();
  gets(s);
  for(i=0;i<m;i++)
  { if(s[i]=='W')
  w++;
  if(s[i]=='B')
  b++;
  if(s[i]=='T')
  t++;
  if(s[i]=='A')
  a++; }
  if(a==m)
  printf("Case %d: ABANDONED\n",r++);
  else if(b>0 &&t==0 && w==0 )
  printf("Case %d: BANGLAWASH\n",r++);
  else if(w>0 &&t==0 && b==0 )
  printf("Case %d: WHITEWASH\n",r++);
  else if(b==w)
  printf("Case %d: DRAW %d %d\n",r++,b,t);
  else if(b>w)
  printf("Case %d: BANGLADESH %d - %d\n",r++,b,w);
  else if(w>b)
  printf("Case %d: WWW %d - %d\n",r++,w,b);
  }
  }
  return 0; }
