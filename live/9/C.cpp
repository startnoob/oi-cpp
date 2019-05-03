/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月03日 星期五 19时00分14秒
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
int b[150][150];
int main()
{
    int t;
    cin>>t;
    fo(i,1,t,1)
    {
        fo(j,1,i,1)
        {
            cin>>b[i][j];
        }
    }
    for(int i=t-1;i>=1;i--)
    {
        fo(j,1,i,1) b[i][j]+=max(b[i+1][j],b[i+1][j+1]);
    }
    cout<<b[1][1];
}
