#include<stdio.h>
#include<string.h>
int main()
{
int i,j,l,l1,r,p,k,n,t,y;
char s[1000],s1[1000],sum[1000];
scanf("%d",&n);
getchar();
while(n-->0){
r=0;
scanf("%s",&s);
scanf("%s",&s1);
l=strlen(s);
l1=strlen(s1);
if(l>=l1)
{
j=0;
k=0;
for(i=0;i<l;i++)
{
if(i<l&&j<l1)
{
p=r+(s[i]-'0')+(s1[j]-'0');
j++;
}
else
{
p=r+(s[i]-'0');
}
if(p>9)
{
sum[k]=p%10+'0';
r=p/10;
k++;
}
else
{
sum[k]=p+'0';
r=0;
k++;
}
}
if(r!=0)
{
sum[k]=r+'0';
k++;
}
for(i=0;i<k;i++)
{ y=sum[i]-'0';
if(y>0)

{
t=i;
break;
}
}

for(i=t;i<k;i++)
{
printf("%c",sum[i]);
}
printf("\n");

}


else
    {
        j=0;
        k=0;
        r=0;
        for(i=0;i<l1;i++)
        {
            if(i<l1&&j<l)
            {
                p=r+(s[j]-'0')+(s1[i]-'0');
                j++;
            }
            else
            {
                p=r+(s1[i]-'0');
            }
            if(p>9)
            {
                sum[k]=p%10+'0';
                r=p/10;
                k++;
            }
            else
            {
                sum[k]=p+'0';
                r=0;
                k++;
            }
        }
        if(r!=0)
        {
            sum[k]=r+'0';
            k++;
        }
        for(i=0;i<k;i++)
{ y=sum[i]-'0';
if(y>0)

{
t=i;
break;
}
}


        for(i=t;i<k;i++)
        {
            printf("%c",sum[i]);
        }
        printf("\n");

    }
}
return 0;

}


