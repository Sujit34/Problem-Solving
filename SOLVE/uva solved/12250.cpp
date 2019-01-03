    #include<stdio.h>
    #include<string.h>
    int main()
    {
    int t=1,a,b,c,x,y,z,r;

    char d[14]={"HELLO"};
    char e[14]={"HOLA"};
    char f[14]={"HALLO"};
    char g[14]={"BONJOUR"};
    char h[14]={"CIAO"};
    char i[14]={"ZDRAVSTVUJTE"};
    char word1[80];
    while(gets(word1)){
    if(word1[0]=='#')
    return 0;
    else{
    if(strcmp(word1,d)==0)
    {
    printf("Case %d: ENGLISH\n",t);
    t++;
    }
    else if(strcmp(word1,e)==0)
    {
    printf("Case %d: SPANISH\n",t);
    t++;
    }
    else if(strcmp(word1,f)==0)
    {
    printf("Case %d: GERMAN\n",t);
    t++;
    }
    else if(strcmp(word1,g)==0)
    {
    printf("Case %d: FRENCH\n",t);
    t++;
    }
    else if(strcmp(word1,h)==0)
    {
    printf("Case %d: ITALIAN\n",t);
    t++;
    }
    else if(strcmp(word1,i)==0)
    {
    printf("Case %d: RUSSIAN\n",t);
    t++;
    }
    else
    {
    printf("Case %d: UNKNOWN\n",t);
    t++;
    }}

    }
    return 0;}

