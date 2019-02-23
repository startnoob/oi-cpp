#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int n,m;
int main()
{
	cin>>n>>m;
	while(n!=0&&m!=0)
	{
		memset(dp,0x3f,sizeof(dp));
		for(int i=0; i<m; i++)
		{
			int u,v,val;
			cin>>u>>v>>val;
			dp[u][v]=dp[v][u]=val;
		}
		for(int k=1; k<=n; k++)
		{
			for(int i=1; i<=n; i++)
			{
				for(int j=1; j<=n; j++) dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
			}
		}
		cout<<dp[1][n]<<endl;
		cin>>n>>m;
	}
}