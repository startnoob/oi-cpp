#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int main()
{
	int n,m;
	while(scanf("%d",&n)!=EOF)
	{
		bool s=true;
		memset(dp,0x3f3f3f,sizeof(dp));
		scanf("%d",&m);
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			dp[u][v]=dp[v][u]=1;
		}
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) if(dp[i][j]>7) s=false;
		}
		if(s==false) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}