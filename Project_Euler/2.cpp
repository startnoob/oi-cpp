/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	
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
#define int long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
int arr[4000020];
signed main()
{
    int cnt=0;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=4000000;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]>4000000) break;
        if(arr[i]%2==0) cnt+=arr[i];
    }
    cnt+=2;
    cout<<cnt;
}
