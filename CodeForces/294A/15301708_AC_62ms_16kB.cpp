#include <bits/stdc++.h>
int ram[150],x,y;
using namespace std;
int main()
{
	
	int n,m;
	scanf("%d",&n);
	for (int i=1; i<=n; i++) scanf("%d",&ram[i]);
	scanf("%d",&m);
	for (int i=1; i<=m; i++)
	{
		scanf("%d%d",&x,&y);
		int b=ram[x];
		ram[x]-=((y-1)+b-y);
		ram[x-1]+=(y-1);
		ram[x+1]+=(b-y);
		ram[x]--;
	}
	for (int i=1; i<=n; i++)
	{
		printf("%d\n",ram[i]);
	}
	return 0;
}