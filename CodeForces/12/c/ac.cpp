#include<bits/stdc++.h>
using namespace std;
#define M 150
map<string,int> mark;
string fruit[M];
struct node
{
	string name;
	int zz=1;
}ff[M];
bool cmp(node x,node y)
{
	return x.zz>y.zz;
}
int arr[M];
int main()
{
	int tail=0;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<m;i++)
	{
		cin>>fruit[i];
		mark[fruit[i]]++;
	}
	for(int i=0;i<m;i++)
	{
		if(mark[fruit[i]]!=0)
		{
			ff[tail].name=fruit[i];
			ff[tail].zz=mark[fruit[i]];
			mark[fruit[i]]=0;
			tail++;
		}
	}
	sort(ff,ff+tail,cmp);
	int maxx_ans=0,minx_ans=0,tail_ans=0;
//	cout<<endl;
	for(int i=0;i<tail;i++)
	{
//		cout<<ff[i].name<<" "<<ff[i].zz<<endl;
		minx_ans+=ff[i].zz*arr[tail_ans];
		maxx_ans+=ff[i].zz*arr[n-1-tail_ans];
		tail_ans++;
//		cout<<minx_ans<<" "<<maxx_ans<<endl;
	}
	printf("%d %d",minx_ans,maxx_ans);
}
