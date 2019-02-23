#include<bits/stdc++.h>
#define N 205
#define inf 0x7ffffff
#define eps 1e-9
#define pi acos(-1.0)
#define P system("pause")
using namespace std;
int n,m;
int mp[N][N],dist[N],vis[N];
queue<int> q;
void SPFA(int s)
{
	memset(vis,0,sizeof(vis));
	while(!q.empty()) q.pop();
	int i;
	for(i = 0; i < n; i++)
		dist[i] = inf;
	dist[s] = 0;
	q.push(s);
	vis[s] = 1;
	while(!q.empty())
	{
		int temp = q.front();
		q.pop();
		for(i = 0; i < n; i++)
			if(dist[i] > mp[temp][i]+dist[temp])
			{
				dist[i] = dist[temp] + mp[temp][i];
				if(!vis[i])
				{
					q.push(i);
					vis[i] =1;
				}
			}
		vis[temp] = 0;
	}
}
int main()
{
	while(scanf("%d%d",&n,&m) != EOF)
	{
		int i,j;
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				mp[i][j] = mp[j][i] = inf;
		for(i = 0 ; i < m; i++)
		{
			int x,y,z;
			scanf("%d%d%d",&x,&y,&z);
			if(mp[x][y] > z)
				mp[x][y] = mp[y][x] = z;
		}
		int start ,end;
		scanf("%d%d",&start,&end);
		SPFA(start);
		if(dist[end] == inf) printf("%d\n",-1);
		else printf("%d\n", dist[end]);
	}
	return 0;
}