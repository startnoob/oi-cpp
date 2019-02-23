#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int depth,k,s;
		cin>>depth>>k;
		int depth1=1;
		s=1;
		while(depth1!=depth)
		{
			if(k%2==1)
			{
				s=2*s;
				k=(k+1)/2;
			}
			else
			{
				s=2*s+1;
				k=k/2;
			}
			depth1++;
		}
		cout<<s<<endl;
	}
}

