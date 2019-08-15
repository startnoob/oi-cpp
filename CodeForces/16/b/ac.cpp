/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
using namespace std;
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
struct node
{
    int box,matches;
}en[30];
bool cmp(node x,node y)
{
    if(x.matches==y.matches) return x.box>y.box;
    return x.matches>y.matches;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) scanf("%d%d",&en[i].box,&en[i].matches);
    sort(en,en+m,cmp);
    //for(int i=0;i<m;i++) cout<<en[i].box<<" "<<en[i].matches<<endl;
    int tail=0;
    long long cnt=0;
    while(tail<m&&n>en[tail].box)
    {
        cnt+=en[tail].box*en[tail].matches;
        n-=en[tail++].box;
    }
    cnt+=n*en[tail].matches;
    printf("%lld",cnt);
}
