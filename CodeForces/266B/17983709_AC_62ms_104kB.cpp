#include<bits/stdc++.h>
/*yes*/
using namespace std;
char line[100000];
int main()
{
	int n,t;
	cin>>n>>t>>line;
	for(int i=1;i<=t;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(line[j]=='B'&&line[j+1]=='G')
			{
				swap(line[j],line[j+1]);
				j++;
			}
		}
	}
	cout<<line;
}