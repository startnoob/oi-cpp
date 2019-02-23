#include<bits/stdc++.h>
using namespace std;
long long cnt,sum,num[1000000];
struct node
{
	long long number;
	long long place;
}in[1000000];
bool cmp(node a,node b)
{
	return a.number>b.number;
}
bool cmp1(int a,int b)
{
	return a>b;
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>in[i].number;
		in[i].place=i;
		sum+=in[i].number;
	}
	sort(1+in,in+1+t,cmp);
	for(int i=1;i<=t;i++)
	{
		if(i==1)
		{
			if(sum-in[i].number==2*in[2].number)
			{
				cnt++;
				num[i]=in[1].place;
			}
		}
		else
		{
			if(sum-in[i].number==2*in[1].number)
			{
				cnt++;
				num[i]=in[i].place;
			}
		}
	}
	sort(num+1,num+1+t,cmp1);
	cout<<cnt<<endl;
	if(cnt>0) for(int i=1;i<=cnt;i++) cout<<num[i]<<" ";
}