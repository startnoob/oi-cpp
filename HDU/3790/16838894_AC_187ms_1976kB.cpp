#include<bits/stdc++.h>
using namespace std;
int cnt,num_dot,num_side,st,ed,dis[1010],cost[1010],box[1010];
struct node
{
	int to,next,d,c;
}side[200010];
void add(int from,int to,int d,int c)
{
	side[cnt].to=to;
	side[cnt].d=d;
	side[cnt].c=c;
	side[cnt].next=box[from];
	box[from]=cnt++;
}
void init()
{
	int s,e,d,c;
	cnt=0;
	memset(box,-1,sizeof(box));
	for(int i=0;i<num_side;i++)
	{
		scanf("%d%d%d%d",&s,&e,&d,&c);
		add(s,e,d,c);
		add(e,s,d,c);
	}
	scanf("%d%d",&st,&ed);
}
void spfa()
{
	int mid;
	bool iq[1010];
	queue<int>qq;
	memset(iq,0,sizeof(iq));
	memset(dis,127,sizeof(dis));
	memset(cost,127,sizeof(cost));
	iq[st]=1;
	dis[st]=0;
	cost[st]=0;
	qq.push(st);
	while(qq.size())
	{
		mid=qq.front();
		qq.pop();
		iq[mid]=0;
		for(int i=box[mid];i>-1;i=side[i].next)
		{
			if(dis[side[i].to]>dis[mid]+side[i].d)
			{
				dis[side[i].to]=dis[mid]+side[i].d;
				cost[side[i].to]=cost[mid]+side[i].c;
				if(!iq[side[i].to])
				{
					qq.push(side[i].to);
					iq[side[i].to]=1;
				}
			}
			else if(dis[side[i].to]==dis[mid]+side[i].d&&cost[side[i].to]>cost[mid]+side[i].c)
			{
				cost[side[i].to]=cost[mid]+side[i].c;
				if(!iq[side[i].to])
				{
					qq.push(side[i].to);
					iq[side[i].to]=1;
				}
			}
		}
	}
}
int main()
{
	while(scanf("%d%d",&num_dot,&num_side)&&(num_dot!=0||num_side!=0))
	{
		init();
		spfa();
		printf("%d %d\n",dis[ed],cost[ed]);
	}
}