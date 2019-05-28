/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月25日 星期六 13时03分47秒
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
int arr[1000],f[1000];
int main()
{
    int t,ans=0;
    cin>>t;
    fo(i,1,t,1) cin>>arr[i];
    f[1]=1;
    fo(i,1,t,1)
    {
        f[i]=1;
        if(arr[i]>arr[i-1]) f[i]=f[i-1]+1;
        if(ans<f[i]) ans=f[i];
    }
    cout<<ans;
}
