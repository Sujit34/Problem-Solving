    #include<stdio.h>
    int main()
    {
    int x,y,n,k,c,i,t;
    while(scanf("%d",&t)==1)
    {
    while(t--)
    {scanf("%d%d",&x,&y);
    n=y-x;c=0,k=0;

    for(i=1;n!=0;i++)
    { if(k+i*2>n)
    {
    k=k+i;
    c++;
    }
    else
    {
    k=k+i*2;
    c+=2;
    }
    if(k>=n)
    break;
    }



    printf("%d\n",c);}
    }return 0;

    }


