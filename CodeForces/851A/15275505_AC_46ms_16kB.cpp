#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,t;
	scanf("%lld%lld%lld",&n,&k,&t);
	if(t<k) printf("%lld",t);
	else if(t>n) printf("%lld",k-t+n);
	else printf("%lld",k);
	return 0;
}
