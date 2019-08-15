/*************************************************************************
	> File Name: D.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月03日 星期五 19时54分12秒
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
int arr[203][203];
int dp[203][203];
int main()
{
    int n,m;
    cin>>n>>m;
    fo(i,1,n,1)
    {
        fo(j,1,m,1)
        {
            cin>>arr[i][j];
        }
    }
    fo(i,1,n,1)
    {
        fo(j,1,m,1)
        {
            int temp=0;
            fo(p1,1,i-1,1)
            {
                fo(p2,1,j-1,1)
                {
                    temp+=arr[p1][p2];
                }
            }
            dp[i][j]=max(dp[i][j],temp);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) ans=max(ans,dp[i][j]);
    }
    cout<<ans;
}
