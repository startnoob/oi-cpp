/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 07:49:41 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
struct node
{
    int from,to,v;
}e[M];
int dis[M];
bool st=false;
void bell(int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int a=e[j].from,b=e[j].to,c=e[j].v;
            if(dis[b]>dis[a]+c)
            {
                dis[b]=dis[a]+c;
                if(i==n) st=true;
            }
        }
    }
}
int main()
{
    int n1,m1;
    memset(dis,0x3f3f3f3f,sizeof(dis));
    cin>>n1>>m1;
    for(int i=1;i<=m1;i++) scanf("%d%d%d",&e[i].from,&e[i].to,&e[i].v);
    dis[1]=0;
    bell(n1,m1);
    if(st==true) printf("circle");
    else if(dis[n1]>=0x3f3f3f3f) printf("can't arrive!");
    else cout<<dis[n1];
}
