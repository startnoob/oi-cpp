#include<bits/stdc++.h>
#define ll long long
ll powmod(ll x,ll y)
{
	ll t;
	for(t=1; y; y>>=1,x=x*x) if(y&1) t=t*x;
	return t;
}
ll cnt(ll x)
{
	ll tmp=0;
	while(x)
	{
		if(x%2==1) tmp++;
		x>>=1;
	}
	return tmp;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll x;
		scanf("%lld",&x);
		ll ans=powmod(2LL,cnt(x));
		if(x==0) puts("1");
		else printf("%lld\n",ans);
	}
	return 0;
}