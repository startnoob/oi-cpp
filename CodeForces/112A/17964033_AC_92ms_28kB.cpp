#include<bits/stdc++.h>
using namespace std;
char s1[10000],s2[10000];
int main()
{
	scanf("%s%s",s1,s2);
	int len1=strlen(s1),len2=strlen(s2);
	for(int i=0;i<len1;i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z') s1[i]+=32;
		if(s2[i]>='A'&&s2[i]<='Z') s2[i]+=32;
	}
	if(strcmp(s1,s2)==0) cout<<"0";
	if(strcmp(s1,s2)>0) cout<<"1";
	if(strcmp(s1,s2)<0) cout<<"-1";
}
	