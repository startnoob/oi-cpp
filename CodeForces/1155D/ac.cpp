/*************************************************************************
	> File Name: ./ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月31日 星期五 22时11分14秒
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
#define M 300010
ll dp[M][4],a[M];
int main()
{
    ll n,x;
    cin>>n>>x;
    fo(i,1,n,1) cin>>a[i];
    fo(i,1,n,1)
    {
        dp[i][0]=max(dp[i-1][0]+a[i],a[i]);
        dp[i][1]=max(dp[i-1][1],dp[i-1][0])+a[i]*x;
        dp[i][2]=max(dp[i-1][2],dp[i-1][1])+a[i];
    }
    ll ans=0;
    fo(i,1,n,1)
    {
        ans=max(ans,max(dp[i][0],max(dp[i][1],dp[i][2])));
    }
    cout<<ans;
}
