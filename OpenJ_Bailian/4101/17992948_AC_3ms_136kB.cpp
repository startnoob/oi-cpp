/*************************************************************************
	> File Name: kuang.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月26日 星期六 17时23分15秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
queue<int> x,y;
int move1[5]= {0,0,1,-1};
int move2[5]= {1,-1,0,0};
int cnt1,cnt2;
char bd[100][100];
void bfs(void);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<=50; i++)
        {
            for(int j=0; j<=50; j++) bd[i][j]='#';
        }
        while(!x.empty()) x.pop();
        while(!y.empty()) y.pop();
        cnt1=cnt2=0;
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) cin>>bd[i][j];
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(bd[i][j]!='#')
                {
                    if(bd[i][j]=='r') cnt1++;
                    else cnt2++;
                    x.push(i);
                    y.push(j);
                    bfs();
                }
            }
        }
        printf("%d %d\n",cnt1,cnt2);
    }
}
void bfs(void)
{
    for(int i=0; i<4; i++)
    {
        if(bd[x.front()][y.front()]!='#'&&bd[x.front()][y.front()]==bd[x.front()+move1[i]][y.front()+move2[i]])
        {
            x.push(x.front()+move1[i]);
            y.push(y.front()+move2[i]);
        //    cout<<x.front()<<" "<<y.front()<<" "<<x.back()<<" "<<y.back()<<endl;
        }
    }
    bd[x.front()][y.front()]='#';
    x.pop();
    y.pop();
    if(x.empty()&&y.empty()) return;
    bfs();
}
