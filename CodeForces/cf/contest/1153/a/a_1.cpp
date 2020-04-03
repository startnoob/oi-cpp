/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Sat 13 Apr 2019 10:05:30 PM CST
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
int a[1000][3];
int ans[1000000];
int main()
{
    int n,t;
    cin>>n>>t;
    fo(i,1,n,1)
    {
        cin>>a[i][1]>>a[i][2];
        fo(j,a[i][1],10000,a[i][2]) ans[j]=i;
    }
    int cnt=t;
    while(!ans[cnt]) cnt++;
    cout<<ans[cnt];
}
