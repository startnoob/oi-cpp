#include<bits/stdc++.h>
using namespace std;
int a[4];
int main()
{
	cin>>a[1]>>a[2]>>a[3];
	cout<<max(a[1]+a[2]+a[3],max((a[1]+a[2])*a[3],max(a[1]*(a[2]+a[3]),max(a[1]*a[2]*a[3],max((a[1]+a[2]*a[3]),(a[1]*a[2]+a[3]))))));
}