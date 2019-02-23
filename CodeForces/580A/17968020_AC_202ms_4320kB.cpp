#include<bits/stdc++.h>
using namespace std;
int s[1000000],f[100000];
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++) cin>>s[i];
	f[0]=1;
	for(int i=0;i<t;i++)
	{
		if(s[i]>=s[i-1]) f[i]=f[i-1]+1;
		else f[i]=1;
	}
	sort(f,f+t);
	cout<<f[t-1];
}