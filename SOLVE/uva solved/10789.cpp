#include<stdio.h>
 #include<string.h>
  int main()
   { int ascii[200],x,j,max=0,i,a,t=0,b,c,p,q,n;
   char s[2010];
   scanf("%d",&n);
   getchar();
   for(p=1;p<=n;p++){
       gets(s);
       printf("Case %d: ",p);

   memset(ascii,0,sizeof(ascii));

      for(i=0;i<strlen(s);i++)
       { x=s[i];
       ascii[x]++;
         if (max<ascii[x])
           max = ascii[x];
       }q=0;
for (i=max;i>=1;i--){
for (a=48;a<=122;a++){
if (ascii[a]==i)
{c=0;
if(ascii[a]==1)
c++;
    for(b=2;b<i;b++)
    {
        if(i%b==0){
        c++;
        break;}
    }
    if(c==0)
    {
        q=1;
        ascii[a]=3000;

    }
    else

    {
        ascii[a]=0;
    }



}}}
for(i=48;i<=122;i++)
{
    if(ascii[i]==3000)
    {
        printf("%c",i);
    }
}
if(q==0)
{
    printf("empty");
}
printf("\n");

   }
return 0;
       }


