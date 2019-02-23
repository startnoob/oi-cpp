#include<bits/stdc++.h>
using namespace std;
long long p(long long a,long long b)
{
    long long ret=1;
    while(b>0)
    {
        if(b%2==1) ret=1LL*ret*a%(1000000007);
        b=b/2;
        a=1LL*a*a%(1000000007);
    }
    return ret;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n=2;
		long long x;
		scanf("%lld",&x);
		printf("%lld\n",p(n,x)-1);
	}
	return 0;
}