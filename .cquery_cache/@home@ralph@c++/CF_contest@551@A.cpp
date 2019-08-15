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
        if(a[i][1]<t)
        {
            int time1=a[i][1];
            while(time1<t) time1+=a[i][2];
            ans[i]=time1;
        }
        else if(a[i][1]==t)
        {
            cout<<i;
            return 0;
        }
        else{
            ans[i]=a[i][1];
        }
    }
    int point=1;
    for(int i=1;i<=n;i++)
    {
        if(ans[i]<ans[point]) point=i;
    }
    cout<<point;
}
