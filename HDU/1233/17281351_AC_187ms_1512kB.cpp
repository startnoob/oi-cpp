#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e4;
int par[MAXN],depth[MAXN];
struct edge
{
	int u,v,val;
} G[MAXN];
void Init(int n)
{
	for(int i=0; i<=n; i++)
	{
		par[i]=i;
	}
}
int Find(int x)
{
	if(par[x]==x) return x;
	return par[x]=Find(par[x]);
}
void Union(int x,int y)
{
	x=Find(x),y=Find(y);
	if(x==y) return;
	else
	{
		if(depth[y]>depth[x]) par[x]=y;
		else
		{
			par[y]=x;
			if(depth[x]==depth[y]) depth[x]++;
		}
	}
}
bool cmp(edge x,edge y)
{
	return x.val<y.val;
}
int core(int m)
{
	int ans=0;
	sort(G,G+m,cmp);
	for(int i=0; i<m; i++)
	{
		int u=G[i].u,v=G[i].v,val=G[i].val;
		if(!(Find(u)==Find(v)))
		{
			Union(u,v);
			ans+=val;
		}
	}
	return ans;
}
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		else
		{
			Init(n);
			n=n*(n-1)/2;
			memset(G,0x3f3f3f3f,sizeof(G));
			int a,b,c;
			for(int i=0; i<n; i++) scanf("%d%d%d",&G[i].u,&G[i].v,&G[i].val);
			printf("%d\n",core(n));
		}
	}
}