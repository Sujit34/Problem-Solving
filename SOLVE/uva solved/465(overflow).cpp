
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,l,l1,carry,k,p,ans[1000],tmp,re,t;
    long double x,y,z;
    char s[1000],s1[1000],sum[1000],c,s2[1000];
    while(scanf("%s %c %s",&s,&c,&s1)==3){
        carry=0;k=0;
    l=strlen(s);
    l1=strlen(s1);
    if(c=='+')
   {

        if(l>=l1)
        {
           j=l1-1;
           for(i=l-1;i>=0;i--)
           {
               if(i>=0&&j>=0)
               {
                   p=carry+(s[i]-'0')+(s1[j]-'0');
                   j--;
               }
               else
               {
                   p=carry+(s[i]-'0');
               }
               if(p>9)
               {
                   sum[k]=p%10+'0';
                   carry=p/10;
                   k++;
               }
               else
               {
                   sum[k]=p%10+'0';
                   carry=0;
                   k++;
               }
           }
           if(carry!=0)
           {
               sum[k]=carry+'0';
               k++;
           }
           sum[k]='\0';
           for(t=k-1,j=0;t>=0;t--)
           {
               s2[j]=sum[t];
               j++;
           }
           s2[j]='\0';

         printf("%s %c %s\n",s,c,s1);
          x=atof(s);//make float value from string by atof function
          y=atof(s1);
          z=atof(s2);
          if(x>2147483647)
          {
              printf("first number too big\n");
          }
          if(y>2147483647)
          {
              printf("second number too big\n");
          }
          if(z>2147483647)
          {
              printf("result too big\n");
          }
        }
        else
        {
            j=l-1;
        k=0;
        carry=0;
        for(i=l1-1;i>=0;i--)
        {
            if(i>=0&&j>=0)
            {
                p=carry+(s[j]-'0')+(s1[i]-'0');
                j--;
            }
            else
            {
                p=carry+(s1[i]-'0');
            }
            if(p>9)
            {
                sum[k]=p%10+'0';
                carry=p/10;
                k++;
            }
            else
            {
                sum[k]=p+'0';
                carry=0;
                k++;
            }
        }
        if(carry!=0)
        {
            sum[k]=carry+'0';
            k++;
        }
        sum[k]='\0';
        for(t=k-1,j=0;t>=0;t--)
           {
               s2[j]=sum[t];
               j++;
           }
           s2[j]='\0';

        printf("%s %c %s\n",s,c,s1);
          x=atof(s);
          y=atof(s1);
          z=atof(s2);
          if(x>2147483647)
          {
              printf("first number too big\n");
          }
          if(y>2147483647)
          {
              printf("second number too big\n");
          }
          if(z>2147483647)
          {
              printf("result too big\n");
          }

        }
    }
    else if(c=='*')
    {
        memset(ans,0,sizeof(ans));
k = 0;
for(i=l1-1;i>=0;i--){
tmp = k++;
for(j=l-1;j>=0;j--){
ans[tmp++] += (s1[i]-'0')*(s[j]-'0');
}
}

carry=0;
for(i=0;i<1000;i++){
ans[i] += carry;
carry = ans[i]/10;
ans[i] %= 10;
}
re=0;t=0;
for(i=999;i>=0;i--){
if(re==0 && ans[i]==0){
continue;}
re=1;
s2[t]=(ans[i]+'0');
t++;
}
s2[t]='\0';

   printf("%s %c %s\n",s,c,s1);
         x=atof(s);
          y=atof(s1);
          z=atof(s2);
          if(x>2147483647)
          {
              printf("first number too big\n");
          }
          if(y>2147483647)
          {
              printf("second number too big\n");
          }
          if(z>2147483647)
          {
              printf("result too big\n");
          }


    }

    }
    return 0;
}

