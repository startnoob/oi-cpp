#include<bits/stdc++.h>
using namespace std;
int t,n;
long long l,r,tot;
long long ans;
long long a[500001];
void csh();
int main()
{
	csh();
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&l,&r);
		ans=0;
		for(long long i=1; i<=tot; i++)
		{
			if(a[i]<l)continue;
			if(a[i]>r)break; 
			ans++;
		}
		printf("%lld\n",ans);
	}
}
void csh()
{
	for(long long i=1; i<=100005; i++)
	{
		long long pos=i*i;
		bool g=true;
		while(pos>0)
		{

			if(pos%10!=0&&pos%10!=1&&pos%10!=4&&pos%10!=9) g=false;
			pos=pos/10;
		}
		if(g==1)
		{
			a[++tot]=i*i;
		}
	}
}