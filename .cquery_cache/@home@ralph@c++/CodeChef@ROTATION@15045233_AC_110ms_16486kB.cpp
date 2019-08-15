#include <bits/stdc++.h>
using namespace std;
int n,m,a[100000],l=0,s;
char q;
int mode(int x,int y)
{
	if(x>=0) return x%y;
	else return (x%y==0)?0:x%y+y;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	while(m--)
	{
		cin>>q>>s;
		if(q=='C') l=mode(l+s,n);
		if(q=='A') l=mode(l-s,n);
		if(q=='R') cout<<a[mode(l+s-1,n)]<<endl;
	}
	return 0;
} 