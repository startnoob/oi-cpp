#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
	string x;
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
    {
    	for(int i=1;i<=6;i++)
    	{
    		cin>>x;
    		if(x=="blue") a[i]=1;
    		if(x=="yellow") a[i]=2;
    		if(x=="green") a[i]=3;
    		if(x=="orange") a[i]=4;
    		if(x=="black") a[i]=5;
    		if(x=="red") a[i]=6;
	}
	int sum=0;
	if(a[1]==a[4]&&a[4]==a[5]) sum=1;
	if(a[1]==a[3]&&a[3]==a[6]) sum=1;
	if(a[5]==a[2]&&a[2]==a[3]) sum=1;
	if(a[1]==a[4]&&a[4]==a[6]) sum=1;
	if(a[2]==a[4]&&a[4]==a[5]) sum=1;
	if(a[2]==a[6]&&a[6]==a[3]) sum=1;
	if(a[2]==a[4]&&a[4]==a[6]) sum=1;
	if(a[1]==a[3]&&a[3]==a[5]) sum=1;
	if(sum==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
} 