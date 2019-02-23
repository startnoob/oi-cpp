#include<bits/stdc++.h>
using namespace std;
int main()
{
int s[1000]={0};
int t;
cin>>t;
for(int i=0;i<t;i++){
cin>>s[i];
	}
sort(s,s+t);
for(int i=0;i<t;i++) cout<<s[i]<<" ";
}