/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月10日 星期五 20时05分19秒
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
int w[600],v[600];
int dp[50000];
int main()
{
    memset(dp,0x3f3f3f3f,sizeof(dp));
    dp[0]=0;
    int we1,we2;
    cin>>we1>>we2;
    int we=we2-we1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=we;j++)
        {
            if(j>=w[i]) dp[j]=min(dp[j-w[i]]+v[i],dp[j]);
        }
    }
    if(dp[we]>=10000000) printf("This is impossible.");
    else cout<<"The minimum amount of money in the piggy-bank is "<<dp[we]<<".";
}
