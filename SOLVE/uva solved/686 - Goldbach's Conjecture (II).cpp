    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    # define max 20000000
    int prm[max];
    long long int res[max],ans1[max],ans2[max];
    int main()
    {long long int i,j;
    int n,r,t,abort,count=0,p;
    memset(prm,0,sizeof(prm));
    for(i=0;i<max;i++)
    {
    if(i%2==0)
    prm[i]=1;
    }
    for(i=3;i<=sqrt(max)+1;i+=2)
    {if(prm[i]!=1)
    {for(j=i*i;j<=max;j+=i*2)
    prm[j]=1;}
    }
    prm[2]=0;

    while(scanf("%d",&n)==1)
    {if(n==0)
    break;
    count=0;
    p=n/2;
    r=1,abort=0;
    i=3;j=n;
    while(prm[j]!=0)
    {j--;}

    while(r!=0)
    {t=i+j;
    if(t>n)
    {
    j--;
    while(prm[j]!=0)
    {j--;
    if(j<=3)
    {r=0;abort=1;}
    }
    }
    else if(t<n)
    {i++;
    while(prm[i]!=0)
    {i++;
    if(i>j)
    {
    r=0;
    }
    }
    }
    else if(t==n)
    {

    j--;
    while(prm[j]!=0){
    j--;
    if(j<=i)
    {
    r=0;
    }
    }
    count++;
    }
    }
    if(n==6)
    {
        printf("1\n");
    }
    else
    {
        printf("%d\n",count);
    }

    }
    return 0;
    }
