/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月03日 星期五 19时41分38秒
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
int dp[1005][1005];
char s1[1005],s2[1005];
int main()
{
    cin>>s1>>s2;
    int len1=strlen(s1);
    int len2=strlen(s2);
    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            if(s1[i-1]==s2[j-1]) dp[i][j]=max(dp[i-1][j-1]+1,dp[i][j]);

        }
    }
    cout<<dp[len1][len2];
}
