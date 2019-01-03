#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[255],b[255];
int ans[1000];

 int main()
{
int i,j,k,len1,len2,tmp;
while(gets(a)){
gets(b);
len1 = strlen(a);
len2 = strlen(b);
memset(ans,0,sizeof(ans));
k = 0;
for(i=len2-1;i>=0;i--){
tmp = k++;
for(j=len1-1;j>=0;j--){
ans[tmp++] += (b[i]-'0')*(a[j]-'0');
}
}

int carry=0;
for(i=0;i<1000;i++){
ans[i] += carry;
carry = ans[i]/10;
ans[i] %= 10;
}
int re=0;
for(i=999;i>=0;i--){
if(re==0 && ans[i]==0){
continue;}
re=1;
printf("%d",ans[i]);
}
if(re==0)
printf("0");
printf("\n");
}
}

