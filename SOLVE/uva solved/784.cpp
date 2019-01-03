    #include<stdio.h>
    #include<string.h>
    #include<iostream>
    using namespace std;
    char a[210][210];
    void star(int x,int y)
    {
    int i,R[]={0,0,1,-1},C[]={1,-1,0,0},xx,yy;
    for(i=0;i<4;i++)
    {
    xx=x+R[i];
    yy=y+C[i];
    if(a[xx][yy]==' ')
    {

    a[xx][yy]='#';
    star(xx,yy);
    }
    else if(a[xx][yy]=='*')
    {

    a[xx][yy]='#';
    star(xx,yy);
    }
    }
    }
    int main()
    {
    int t,i,j;
    scanf("%d\n",&t);
    while(t--)
    {memset(a,0,sizeof(a));

    for(i=0;i<100;i++)
    {
    gets(a[i]);
    if(a[i][0]=='_')
    {
    break;
    }
    }

    for(int x=0;x<i;x++)
    {
    for(j=0;j<strlen(a[x]);j++)
    {

    if(a[x][j]=='*')
    {
    star(x,j);
    }

    }

    }
    for(int x=0;x<=i;x++)
    {
    for(j=0;j<strlen(a[x]);j++)
    {
    printf("%c",a[x][j]);
    }printf("\n");}

    }
    return 0;}


