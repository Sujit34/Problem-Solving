#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

string a1="qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
	char c;
	cin>>c;

	string a;
	cin>>a;
	if(c=='R')
	for(int i=0;i<a.size();++i)
	{
		for(int j=0;j<a1.size();++j)
		if(a[i]==a1[j]) cout<<a1[j-1];

	}
	else
	for(int i=0;i<a.size();++i)
	{
		for(int j=0;j<a1.size();++j)
		if(a[i]==a1[j]) cout<<a1[j+1];

	}


}

