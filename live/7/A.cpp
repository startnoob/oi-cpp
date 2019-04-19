/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 12 Apr 2019 06:04:34 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
#define M 100000
using namespace std;
int par[M],depth[M];
struct edge
{
	int u,v,val;
} G[M];
void Init(int n)
{
	for(int i=0; i<=n; i++)
	{
		par[i]=i;
	}
	memset(depth,0,sizeof(depth));
	memset(G,0x3f3f3f3f,sizeof(G));
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
int core(int m,int n)//n points,m edges
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
    for(int i=1;i<=n;i++)
    {
        if(par[i]!=par[1]) return -1;
    }
	return ans;
}
int main()
{
    int nzs,mzs;
    cin>>nzs>>mzs;
    Init(nzs);
    for(int i=0;i<mzs;i++)
    {
        scanf("%d%d%d",&G[i].u,&G[i].v,&G[i].val);
    }
    if(core(mzs,nzs)==-1)
    {
         
    }
}
