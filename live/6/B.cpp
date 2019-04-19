/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 07:34:03 PM CST
 ************************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define M 10005
int dis[M],a,b,c,s,t;
int n,m;
bool mark[M];
struct node
{
    int to,v;
    bool operator <(const node &A)const 
    {
        return v>A.v;
    }
} D,E;

vector<node>edge[M];
priority_queue<node>Q;

void Dijkstra()
{
    //for(int i=1; i<=n; i++)
        //mark[i]=0,dis[i]=oo;
    memset(mark,0,sizeof(mark));
    memset(dis,0x3f3f3f3f,sizeof(dis));
    dis[s]=0;
    Q.push((node)
    {
        s,0
    });

    while(!Q.empty())
    {
        node tmp=Q.top();
        Q.pop();
        int k=tmp.to;
        if(mark[k])continue;
        mark[k]=1;
        for(int j=0; j<edge[k].size(); j++) 
        {
            int y=edge[k][j].to;
            int v=edge[k][j].v;
            if(!mark[y]&&dis[y]>dis[k]+v)
            {
                dis[y]=dis[k]+v;
                Q.push((node)
                {
                    y,dis[y]
                });
            }
        }
    }
}
int main()
{
    cin>>n>>m>>s>>t;
    for(int i=1; i<=m; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        edge[a].push_back((node)
        {
            b,c
        });
    }
    Dijkstra();
    if(dis[t]>=0x3f3f3f3f)dis[t]=-1;
    cout<<dis[t]<<endl;
    return 0;
}

