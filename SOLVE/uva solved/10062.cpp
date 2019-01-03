#include<stdio.h>
 #include<string.h>
  #include<math.h>
  int main()
   { int ascii[200],x,j,max=0,i,a,t=0;
   char s[1010];

   while(gets(s)){
      if(t!=0)
{
    printf("\n");
}
   memset(ascii,0,sizeof(ascii));

      for(i=0;i<strlen(s);i++)
       { x=s[i];
       ascii[x]++;
         if (max<ascii[x])
           max = ascii[x];
       }
        for (i=1;i<=max;i++)
for (a=200;a>=32;a--)
if (ascii[a]==i)
printf("%d %d\n",a,i);

t=1;

}

return 0;
       }

