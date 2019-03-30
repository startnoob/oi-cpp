/*************************************************************************
> File Name: ac.cpp
> Author: ralph
> Mail: 1694487365@qq.com
> Created Time: Sat 23 Mar 2019 03:58:24 AM CST
************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int position;
    int far;
};
bool operator<(const node& a,const node& b)
{
    if(a.position==b.position) return a.far>b.far;
    return a.position>b.position;
}
priority_queue<node,vector<node> > que;
int ans;
int main()
{
    node temp;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        while(!que.empty()) que.pop();
        int t;
        scanf("%d",&t);
        for(int i=1; i<=t; i++)
        {
            scanf("%d%d",&temp.position,&temp.far);
            que.push(temp);
        }
        //while(!que.empty())
        //{
        //    temp=que.top();
        //    printf("%d %d\n",temp.position,temp.far);
        //    que.pop();
        //}
    }
}
