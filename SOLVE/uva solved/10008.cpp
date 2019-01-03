    #include<stdio.h>
    #include<string.h>
    int main()
    {
    int n,i,alph[26],l,k,p,t,index,max,ans[30],j;
    char s[100],s1[26],s2[26];
    while(scanf("%d",&n)==1){
    getchar();
    memset(alph,0,sizeof(alph));
    for(i=0;i<n;i++)
    {
    gets(s);
    p=strlen(s);
    for(k=0;k<p;k++)
    {
    for(l=0;l<26;l++)
    {
    if(s[k]=='a'+l||s[k]=='A'+l)
    {
    alph[l]++;
    }
    }
    }
    }
    for(j=0;j<26;j++)
    {max=0;
    for(i=0;i<26;i++)
    {
    if(max<alph[i])
    {max=alph[i];
    index=i;}
    }
    if(alph[index]>0)
    {printf("%c %d\n",index+'A',alph[index]);
    alph[index]=0;}}


    }

    return 0;
    }

