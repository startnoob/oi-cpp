#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll s,n,s2,sum,ans;
int t,i;
int main()
{
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n>>s;
		s2=n*(n+1)/2;
		ans=s2-s;
		i=n-1;
		while(ans>0)
		{
			ans-=i;
			i--;
			sum++;
		}
		cout<<sum<<endl;
	}
}