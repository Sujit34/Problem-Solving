     #include<stdio.h>
    #include<string.h>
    #include<math.h>
    int main()
    {
    int n,i,j,l=2,t,prime[32767];
    prime[0]=2;
    prime[1]=3;
    for(i=5;i<=32767;i++)
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
    char s[70000];
    int m,len,x,sum,sumarr[70000],totalsum,p;
    while(gets(s))
    {
    m=0;x=0;p=0;totalsum=1;
    if(strcmp(s,"0")==0)
    break;
    len=strlen(s);
    for(i=m;i<len;i++)
    {
    if(s[i]==' ')
    {
    sum=0;
    x++;
    for(j=m;j<i;j++)
    {
    sum=sum*10+(s[j]-'0');
    }
    sumarr[p++]=sum;
    if(x%2==0)
    {
    for(j=1;j<=sum;j++)
    {
    totalsum=totalsum*sumarr[p-2];
    }
    }
    m=i+1;
    }

    if(i==len-1)
    {
    sum=0;
    for(j=m;j<=i;j++)
    {
    sum=sum*10+(s[j]-'0');
    }
    sumarr[p++]=sum;
    for(j=1;j<=sum;j++)
    {
    totalsum=totalsum*sumarr[p-2];
    }

    }
    }
    totalsum=totalsum-1;

    int ans[70000];
    memset(ans,0,sizeof(ans));
    for(i=0,j=0;i<l;i++)
    {
    while(totalsum%prime[i]==0)
    {
    int u=prime[i];
    ans[u]++;
    totalsum=totalsum/prime[i];
    }

    if(totalsum==1)
    {
    break;
    }
    }
    if (totalsum>1)
    ans[totalsum] = 1;
    //comment er part and porer part same
    /*for(i=32767, j=0;i>=0;i--)
    {
    if(ans[i]!=0)
    {
    if (j>0)
    {

        printf(" ");
    }
j++;
    printf("%d %d",i,ans[i]);

    }


    }
    printf("\n");
    }
    }*/
    for(i=32767, j=0;i>=0;i--)
    {
    if(ans[i]!=0)
    {
    if (j++)
    printf(" ");
    printf("%d %d",i,ans[i]);

    }


    }



    printf("\n");
    }
    }

