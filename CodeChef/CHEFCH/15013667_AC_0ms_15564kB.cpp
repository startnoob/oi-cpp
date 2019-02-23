#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		char in[500000];
		int sum1=0,sum2=0;
		scanf("%s",in);
 		int len=strlen(in);
		for(int i=0; i<len; i++)
		{
			if(i%2==0)
			{
				if(in[i]!='-') sum1++;
			}
			else
			{
				if(in[i]!='+') sum1++;
			}
		}

		for(int i=0; i<len; i++)
		{
			if(i%2==0)
			{
				if(in[i]!='+') sum2++;
			}
			else
			{
				if(in[i]!='-') sum2++;
			}
		}
		if(sum1>sum2) printf("%d\n",sum2);
		else printf("%d\n",sum1);
	}
}