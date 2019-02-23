#include<algorithm>
#include<iostream>
int s[8];
using namespace std;
int main()
{
	for(int i=0;i<5;i++) cin>>s[i];
	sort(s,s+5);
	for(int i=4;i>=0;i--)
	{
		if(i==0)	cout<<s[0];
		else cout<<s[i]<<" ";
	}
	cout<<endl;
	return 0;
}