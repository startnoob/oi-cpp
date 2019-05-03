/*************************************************************************
	> File Name: D.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月03日 星期五 20时11分55秒
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
#define M 203
int b[M][M],line[M];
int sum[M][M];
int main()
{
    int n,m,max_line_val=0;
    cin>>n>>m;
    fo(i,1,n,1)
    {
        int temp=0;
        fo(j,1,m,1)
        {
            cin>>b[i][j];
            int sum1=0;
            fo(k,1,i,1) sum1+=b[k][j];
            //cout<<sum1<<" ";
            sum[i][j]=sum1;
        }
        //cout<<endl;
    }
    int ans=0;
    fo(i,1,n,1)
    {
        fo(j,1,i-1,1)
        {
            int arr[M],dp[M]={0};
            fo(k,1,m,1) arr[k]=sum[i][k]-sum[j-1][k];
            //cout<<endl;
            fo(k,1,m,1) dp[k]=max(dp[k-1],0)+arr[k];
            int temp=0;
            fo(k,1,m,1) temp=max(temp,dp[k]);
            ans=max(ans,temp);
        }
    }
    cout<<ans;
}
