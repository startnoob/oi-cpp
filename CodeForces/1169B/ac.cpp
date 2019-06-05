/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月29日 星期三 14时14分26秒
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
bool mark[300500];
int arr[300500];
int main()
{
    int n,m;
    cin>>n>>m;
    fo(i,1,m,1)
    {
        int temp;
        cin>>arr[i]>>temp;
        mark[temp]=1;
    }
    sort(arr+1,arr+m+1)
    fo(i,1,0x3f3f3f3f,1)
    {
        if(arr[i]<=n)
    }
}
