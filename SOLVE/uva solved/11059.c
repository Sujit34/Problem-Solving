    #include<stdio.h>
    int main()
    {
    long long int a[1000];int p=1;
    long long int i,j,k,n,sum=1,max;
    while(scanf("%lld",&n)==1){
    max=0;
    for(i=0;i<n;i++)
    {
    scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i;j<n;j++)
    {
    sum=1;
    for(k=i;k<=j;k++)
    {
    sum=sum*a[k];
    }
    if(sum>max)
    {
    max=sum;
    }
    }
    }
    printf("Case #%d: The maximum product is %lld.\n",p,max);
    p++;
    printf("\n");
    }
    return 0;
    }

