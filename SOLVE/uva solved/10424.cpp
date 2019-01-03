#include<stdio.h>
#include<string.h>
int main()
{int l,l1,sum,n,sum1,c,sum2,n1,sum3;
float t,p,q;int i;
    char a[30],b[30];
    while(gets(a)){sum=0;sum1=0;sum2=0;sum3=0;
    gets(b);
    l=strlen(a);
    l1=strlen(b);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='A')
        {
            sum=sum+1;
        }
        else if(a[i]=='b'||a[i]=='B')
        {
            sum=sum+2;
        }
        else if(a[i]=='c'||a[i]=='C')
        {
            sum=sum+3;
        }
        else if(a[i]=='d'||a[i]=='D')
        {
            sum=sum+4;
        }
        else if(a[i]=='e'||a[i]=='E')
        {
            sum=sum+5;
        }
        else if(a[i]=='f'||a[i]=='F')
        {
            sum=sum+6;
        }
        else if(a[i]=='g'||a[i]=='G')
        {
            sum=sum+7;
        }
        else if(a[i]=='h'||a[i]=='H')
        {
            sum=sum+8;
        }
        else if(a[i]=='i'||a[i]=='I')
        {
            sum=sum+9;
        }
        else if(a[i]=='j'||a[i]=='J')
        {
            sum=sum+10;
        }
        else if(a[i]=='k'||a[i]=='K')
        {
            sum=sum+11;
        }
        else if(a[i]=='l'||a[i]=='L')
        {
            sum=sum+12;
        }
        else if(a[i]=='m'||a[i]=='M')
        {
            sum=sum+13;
        }
        else if(a[i]=='n'||a[i]=='N')
        {
            sum=sum+14;
        }
        else if(a[i]=='o'||a[i]=='O')
        {
            sum=sum+15;
        }
        else if(a[i]=='p'||a[i]=='P')
        {
            sum=sum+16;
        }
        else if(a[i]=='q'||a[i]=='Q')
        {
            sum=sum+17;
        }
        else if(a[i]=='r'||a[i]=='R')
        {
            sum=sum+18;
        }
        else if(a[i]=='s'||a[i]=='S')
        {
            sum=sum+19;
        }
        else if(a[i]=='t'||a[i]=='T')
        {
            sum=sum+20;
        }
        else if(a[i]=='u'||a[i]=='U')
        {
            sum=sum+21;
        }
        else if(a[i]=='v'||a[i]=='V')
        {
            sum=sum+22;
        }
        else if(a[i]=='w'||a[i]=='W')
        {
            sum=sum+23;
        }
        else if(a[i]=='x'||a[i]=='X')
        {
            sum=sum+24;
        }
        else if(a[i]=='y'||a[i]=='Y')
        {
            sum=sum+25;
        }
        else if(a[i]=='z'||a[i]=='Z')
        {
            sum=sum+26;
        }
    }
    n=sum;
    while(n!=0){sum1=0;
    if(n<10)
    {
        sum1=n;break;
    }
    else{
    while(n!=0)
    {
        c=n%10;
        n=n/10;
        sum1=sum1+c;

    }n=sum1;
    }}
    p=sum1;
    for(i=0;i<l1;i++)
    {
        if(b[i]=='a'||b[i]=='A')
        {
            sum3=sum3+1;
        }
        else if(b[i]=='b'||b[i]=='B')
        {
            sum3=sum3+2;
        }
        else if(b[i]=='c'||b[i]=='c')
        {
            sum3=sum3+3;
        }
        else if(b[i]=='d'||b[i]=='D')
        {
            sum3=sum3+4;
        }
        else if(b[i]=='e'||b[i]=='E')
        {
            sum3=sum3+5;
        }
        else if(b[i]=='f'||b[i]=='F')
        {
            sum3=sum3+6;
        }
        else if(b[i]=='g'||b[i]=='G')
        {
            sum3=sum3+7;
        }
        else if(b[i]=='h'||b[i]=='H')
        {
            sum3=sum3+8;
        }
        else if(b[i]=='i'||b[i]=='I')
        {
            sum3=sum3+9;
        }
        else if(b[i]=='j'||b[i]=='J')
        {
            sum3=sum3+10;
        }
        else if(b[i]=='k'||b[i]=='K')
        {
            sum3=sum3+11;
        }
        else if(b[i]=='l'||b[i]=='L')
        {
            sum3=sum3+12;
        }
        else if(b[i]=='m'||b[i]=='M')
        {
            sum3=sum3+13;
        }
        else if(b[i]=='n'||b[i]=='N')
        {
            sum3=sum3+14;
        }
        else if(b[i]=='o'||b[i]=='O')
        {
            sum3=sum3+15;
        }
        else if(b[i]=='p'||b[i]=='P')
        {
            sum3=sum3+16;
        }
        else if(b[i]=='q'||b[i]=='Q')
        {
            sum3=sum3+17;
        }
        else if(b[i]=='r'||b[i]=='R')
        {
            sum3=sum3+18;
        }
        else if(b[i]=='s'||b[i]=='S')
        {
            sum3=sum3+19;
        }
        else if(b[i]=='t'||b[i]=='T')
        {
            sum3=sum3+20;
        }
        else if(b[i]=='u'||b[i]=='U')
        {
            sum3=sum3+21;
        }
        else if(b[i]=='v'||b[i]=='V')
        {
            sum3=sum3+22;
        }
        else if(b[i]=='w'||b[i]=='W')
        {
            sum3=sum3+23;
        }
        else if(b[i]=='x'||b[i]=='X')
        {
            sum3=sum3+24;
        }
        else if(b[i]=='y'||b[i]=='Y')
        {
            sum3=sum3+25;
        }
        else if(b[i]=='z'||b[i]=='Z')
        {
            sum3=sum3+26;
        }
    }
    n1=sum3;
    while(n1!=0){sum2=0;
    if(n1<10)
    {
        sum2=n1;break;
    }
    else{
    while(n1!=0)
    {
        c=n1%10;
        n1=n1/10;
        sum2=sum2+c;

    }n1=sum2;
    }}
    q=sum2;
    if(p>q)
    {
        t=(q/p)*100;
        printf("%.2f %%\n",t);
    }
    else
    {
        t=(p/q)*100;
        printf("%.2f %%\n",t);
    }
}
return 0;
}

