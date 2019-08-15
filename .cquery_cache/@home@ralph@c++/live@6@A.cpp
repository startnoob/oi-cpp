/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 05:19:55 AM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 1050
int dp[M][M],dis[M],book[M];
void dijkstra(int maxx)
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
        for(int k=1; k<=maxx; k++)
        {
            dis[k]=min(dis[k],dis[u]+dp[u][k]);
        }
    }
}
int main()
{
        memset(book,0,sizeof(book));
        memset(dis,0x3f3f3f3f,sizeof(dis));
        memset(dp,0x3f3f3f3f,sizeof(dp));
        int total,pos,tar;
        cin>>total>>pos>>tar;
        book[pos]=1;
        dis[pos]=0;
        for(int i=1; i<=total; i++)
        {
            int distan;
            cin>>distan;
            if(i-distan>0) dp[i][i-distan]=1;
            if(i+distan<=total) dp[i][i+distan]=1;
            if(i==pos)
            {
                if(i-distan>0) dis[i-distan]=1;
                if(i+distan<=total) dis[i+distan]=1;
            }
        }
        dijkstra(total);
        if(dis[tar]<0x3f3f3f3f)cout<<dis[tar];
        else cout<<"-1";
}
