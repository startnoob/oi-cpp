#include<cstdio>
#include<queue>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		queue<int>q2;
		queue<int>q1;
		int x;
		scanf("%d",&x);
		for(int i=1; i<=x; i++) q1.push(i);
		while(q1.size()>3)
		{
			while(!q1.empty())
			{
				q2.push(q1.front());
				q1.pop();
				if(q1.empty())
				{
					break;
				}
				q1.pop();
			}
			swap(q2,q1);
			if(q1.size()<=3)
			{
				break;
			}
			while(!q1.empty())
			{
				
				q2.push(q1.front());
				q1.pop();
				if(q1.empty())
				{
					break;
				}
				q2.push(q1.front());
				q1.pop();
				if(q1.empty())
				{
					break;
				}
				q1.pop();
			}
			swap(q1,q2);
		}
		while(!q1.empty()&&q1.size()!=1)
		{
			printf("%d ",q1.front());
			q1.pop();
		}
		printf("%d",q1.front());
		printf("\n");
	}
}