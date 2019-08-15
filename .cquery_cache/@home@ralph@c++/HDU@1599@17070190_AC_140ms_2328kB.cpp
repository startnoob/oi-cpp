#include<bits/stdc++.h>
using namespace std;
int dis[10000][10000],dp[10000][10000];
int main()
{
	int n,m;
	while(scanf("%d",&n)!=EOF)
	{
		int ans=1e6;
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				dp[i][j]=dis[i][j]=1e6;
			}
		}
		cin>>m;
		for(int i=1;i<=m;i++)
		{
			int a,b,c;
			cin>>a>>b>>c;
			dp[a][b]=dp[b][a]=dis[a][b]=dis[b][a]=min(c,dp[a][b]);
		}
		for(int k=1;k<=n;k++)
		{
			for(int i=1;i<=k-1;i++)
			{
				for(int j=1+i;j<=k-1;j++)
				{
					ans=min(ans,dis[i][j]+dp[i][k]+dp[k][j]);
				}
			}
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
				}
			}
		}
		if(ans==1e6) cout<<"It's impossible."<<endl;
		else cout<<ans<<endl;

	}	
}
