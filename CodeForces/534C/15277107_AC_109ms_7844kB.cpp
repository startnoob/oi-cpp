#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int M = 1000000;
LL n, a, d[M];
int main()
{
	long long bi=0;
	scanf("%lld%lld", &n, &a);
	LL sum = 0;
	for(int i = 0; i < n; ++ i)
	{
		scanf("%lld", &d[i]);
		sum += d[i];
	}
	for(int i = 0; i < n; ++ i)
	{
		LL temp1 = d[i]-(a-n)-1;
		LL temp2 = a-(sum-d[i])-1;
		if(i+1==n)
		{
				printf("%lld\n", max(temp1, bi)+max(temp2, bi));
		}
		else printf("%lld ", max(temp1, bi)+max(temp2, bi));
	}
	return 0;
}