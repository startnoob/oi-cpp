#include<bits/stdc++.h>
using namespace std;
int dp[1050][1050],dis[1050],book[1050];
int main()
{
    int t,s,d;
    while(scanf("%d",&t)!=EOF)
    {
        memset(book,0,sizeof(book));
        memset(dis,0x3f3f3f,sizeof(dis));
        memset(dp,0x3f3f3f,sizeof(dp));
        book[0]=1;
        cin>>s>>d;
        int maxx=0;
        for(int i=1; i<=t; i++)
        {
            int a,b,time;
            cin>>a>>b>>time;
            if(max(a,b)>maxx) maxx=max(a,b);
            if(time<dp[a][b])dp[a][b]=dp[b][a]=time;
        }
        for(int i=1; i<=s; i++)
        {
            int in;
            cin>>in;
            dp[in][0]=dp[0][in]=0;
            dis[in]=0;
        }
        for(int i=0; i<=maxx-1; i++)
        {
            int minx=0x3f3f3f;
            int u;
            for(int j=0; j<=maxx; j++)
                if(book[j]==0&&dis[j]<minx)
                {
                    minx=dis[j];
                    u=j;
                }
            book[u]=1;
            for(int k=0; k<=maxx; k++)
            {
                dis[k]=min(dis[k],dis[u]+dp[u][k]);
            }
        }
//        for(int i=0;i<=maxx;i++) cout<<dis[i]<<" ";
//        cout<<endl;
        int cnt=10000000;
        for(int i=1; i<=d; i++)
        {
            int in;
            cin>>in;
            if(dis[in]<cnt) cnt=dis[in];
        }
        cout<<cnt<<endl;
    }
}

