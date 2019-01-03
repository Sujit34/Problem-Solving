#include <cstdio>
#include <algorithm>
#include <cstring>
char a[10001],b[1001],c[10001],s[1001];
int main(){
	int l,i,j,la,lb,lc;
	gets(s);
	l=strlen(s);
	for(i=0,j=0;i<l;i++)
	{

	    if(s[i]=='+')
	    {
	        la=i;
	        break;
	    }
	    a[j++]=s[i];
	}
	for(i=la+1,j=0;i<l;i++)
	{

	    if(s[i]=='=')
	    {
	        lb=i-(la+1);
	        break;
	    }
	    b[j++]=s[i];
	}

	for(i=la+lb+2,j=0;i<l;i++)
	{

	    c[j++]=s[i];
	}


	 la=strlen(a),lb=strlen(b),lc=strlen(c);
	if (la+lb==lc){
		printf("%s+%s=%s\n",a,b,c);
		}
		else
	if (lc-la-lb==2){
		printf("|%s+%s=",a,b);
		for(i=0;i<lc-1;i++)
		{
		    printf("%c",c[i]);
		}
		}
		else
	if (la+lb-lc==2){
		if (la>=lb)

		{
		    for(i=0;i<la-1;i++)
		{
		    printf("%c",a[i]);
		}
		printf("+%s=%s|",b,c);
		}


			else

			{
			   printf("%s+",a);
			   for(i=0;i<lb-1;i++)
			   {
			       printf("%c",b[i]);
			   }
			   printf("=%s|",c);
			}
		}


		else
		printf("Impossible\n");
}
