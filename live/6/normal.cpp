/*************************************************************************
	> File Name: normal.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 06:41:36 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
//struct node
//{
    //int from,to,v;
//}
struct node1
{
    int to,v;
}
vector<node1> e[M];
void bell(int n,int m)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int a=e[i].from,b=e[i].to,c=e[i].v;
            if(dis[b]>dis[a]+c) dis[b]=dis[a]+c;
        }
    }
}
int dp[1050][1050],book[1050],dis[1050];
void Unit()
{
    memset(dp,0x3f,sizeof(dp));
    memset(book,0,sizeof(book));
    memset(dis,0x3f,sizeof(dis));
}
void djs(int maxx)
{
    for(int i=1; i<=maxx-1; i++)
    {
        int minx=0x3f3f3f3f;
        int u=0x3f3f3f3f;
        for(int j=1; j<=maxx; j++)
        {
            //printf("node=%d book[node]=%d dis[node]=%d\n",j,book[j],dis[j]);
            if(book[j]==0&&dis[j]<minx)
            {
                minx=dis[j];
                u=j;
            }
        }
        //cout<<u<<endl;
        if(u>=0x3f3f3f3f) return;
        book[u]=1;
        for(int k=0; k<=edge[k].size(); k++)
        {
            int y=e[k][j].to;
            int val=e[k][j].v;
            if(book[k]==0)
        }
    }
}
int main()
{

}
