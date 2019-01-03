#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int n,i,j,l=2,t,prime[1000],a[1000]={0};
prime[0]=2;
prime[1]=3;
for(i=5;i<=100;i++)
{t=1;
for(j=2;j<=sqrt(i);j++)
{
if(i%j==0)
{
t=0;
break;
}
}
if(t==1)
{
prime[l++]=i;
}
}


while(scanf("%d",&n)==1){
if(n==0)
return 0;
int p=n;
memset(a,0,sizeof(a));

while (n != 1) {
i = n;
j = 0;

while (i > 1) {
int count = 0;
while (i % prime[j] == 0) {
i /= prime[j];
count++;
}
a [j] += count;
j++;
}

n--;
}



for (i = 24; i >= 0; i--) {
if (a [i] != 0)
break;
}
j = i;
int flag;
printf("%3d! =", p);
if (j >= 15)
flag = 0;
else
flag = 15;
for (i = 0; i <= j; i++) {
printf("%3d", a [i]);
flag++;
if (flag == 15)
printf("\n%6c",' ');
}
printf("\n");
}
return 0;
}
