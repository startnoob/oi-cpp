#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int yx;
	int id;
	bool operator <(const Node& t2)const
	{
		if(yx!=t2.yx) return yx<t2.yx;
		return id>t2.id;
	}
};
int main()
{
	int n;
	while((scanf("%d",&n))!=EOF)
	{
		priority_queue<Node>q[4];
		int id=1;
		Node tmp;
		for(int i=0; i<n; i++)
		{
			string qw;
			cin>>qw;
			if(qw=="IN")
			{
				int a,b;
				scanf("%d%d",&a,&b);
				tmp.yx=b;
				tmp.id=id;
				id++;
				q[a].push(tmp);
			}
			else
			{
				int a;
				scanf("%d",&a);
				if(q[a].empty())
				{
					printf("EMPTY\n");
				}
				else
				{

					printf("%d\n",q[a].top().id);
					q[a].pop();
				}
			}
		}
	}
	return 0;
}