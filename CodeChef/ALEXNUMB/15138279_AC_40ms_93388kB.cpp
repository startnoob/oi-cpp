#include<bits/stdc++.h>
using namespace std;
long long a[10000000];
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
		printf("%lld\n",n*(n-1)/2);
	}
}
