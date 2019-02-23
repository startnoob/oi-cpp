#include<bits/stdc++.h>
#define ju(a,b,c,d) (a-b)*(a-b)+(c-d)*(c-d)
using namespace std;
long long x[4],y[4];
int main()
{
	for(int i=1;i<=3;i++) scanf("%lld%lld",&x[i],&y[i]);
	if((x[3]-x[2])*(y[2]-y[1])==(x[2]-x[1])*(y[3]-y[2]))
	{
		printf("No");
		return 0;
	}
	else
	{
		if(ju(x[1],x[2],y[1],y[2])==ju(x[2],x[3],y[2],y[3]))
		{
			printf("Yes");
			return 0;
		}
		else printf("No");
	}
	return 0;
}
