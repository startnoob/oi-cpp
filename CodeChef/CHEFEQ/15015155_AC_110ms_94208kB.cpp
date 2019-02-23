#include <bits/stdc++.h>
int a[10000001],b[10000001];
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	for(int i=1;i<=t;i++)
	{
		memset(b,0,sizeof(b));
		int n,max1=0;
		scanf("%d",&n);
		for (int i=1; i<=n; i++)
		{
			scanf("%d",&a[i]);
			b[a[i]]++;
			if(a[i]>max1) max1=a[i];
		}
		int max2=0;
		for (int i=1; i<=max1; i++)
		{
			if(b[i]>max2)
			{
				max2=b[i];
			}
		}
		printf("%d\n",n-max2);
	}
	return 0;
} 