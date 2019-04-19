/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 12 Apr 2019 06:04:34 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
#define M 1000000
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
bool cmp1(edge x,edge y)
{
    return x.val>y.val;
}
int core(int m,int n,int status)//n points,m edges
{
    int ans=0;
    if(status==1) sort(G,G+m,cmp);
    else sort(G,G+m,cmp1);
    //for(int i=0;i<m;i++)
    //{
    //printf("from=%d to=%d val=%d\n",G[i].u,G[i].v,G[i].val);
    //}
    //cout<<endl;
    for(int i=0; i<m; i++)
    {
        int u=G[i].u,v=G[i].v,val=G[i].val;
        if(!(Find(u)==Find(v)))
        {
            Union(u,v);
            //printf("%d,%d has benn unioned\n",u,v);
            if(val==0) ans++;
        }
    }
    for(int i=1; i<=n; i++)
    {
        //cout<<Find(i)<<" ";
        if(Find(i)!=Find(1)) return -1;
    }
    //cout<<endl;
    return ans;
}
long long fba[1000];
int fb(int n)
{
    fba[1]=1,fba[2]=2;
    for(int i=3; i<=n; i++) fba[i]=fba[i-1]+fba[i-2];
}
int main()
{
    memset(G,0x3f3f3f3f,sizeof(G));
    fb(100);
    int nzs,mzs,maxn=0;
    cin>>nzs>>mzs;
    Init(nzs);
    for(int i=0; i<mzs; i++)
    {
        scanf("%d%d%d",&G[i].u,&G[i].v,&G[i].val);
    }
    int sj=core(mzs,nzs,1);//maxmize
    Init(nzs);
    int sj1=core(mzs,nzs,2);//minimize
    //cout<<sj<<" "<<sj1<<endl;
    for(int i=1; i<=50; i++)
    {
        if(fba[i]<=sj&&sj1<=fba[i])
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
