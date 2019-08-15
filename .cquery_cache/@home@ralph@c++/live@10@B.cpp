/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月10日 星期五 19时29分57秒
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
int temp[1000],f[10000005];
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>temp[i];
        sum+=temp[i];
    }
    f[0]=1;
    int ans=0x7ffffff;
    for(int i=1;i<=n;i++)
    {
        for(int j=sum;j>=temp[i];j--) f[j]|=f[j-temp[i]];
    }
    for(int i=0;i<=sum;i++)
    {
        if(f[i])
        {
            ans=min(ans,abs(sum-i-i));
        }
    }
    cout<<ans;
}
