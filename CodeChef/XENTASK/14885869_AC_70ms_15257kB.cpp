#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int l,sum1=0,sum2=0,temp;
		cin>>l;
		for(int i=1;i<=l;i++)
		{
			cin>>temp;
			if(i%2==1) sum1=sum1+temp;
			else sum2=sum2+temp;
		}
		for(int i=1;i<=l;i++)
		{
			cin>>temp;
			if(i%2==1) sum2=sum2+temp;
			else sum1=sum1+temp;
		}
		cout<<min(sum1,sum2)<<endl;
	}
}