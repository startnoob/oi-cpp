#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,c=0;
	cin>>n;
	while(n>=10)
	{
		c++;
		n++;
		while(n%10==0)
			n/=10;
	}
	cout<<c+9;
	return 0;
}
