/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年06月01日 星期六 22时32分00秒
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
int main()
{
    ll za,zb,zc;
    cin>>za>>zb>>zc;
    ll ans=0;
    ans+=zc*2;
    int temp=min(za,zb);
    za-=temp,zb-=temp;
    ans+=2*temp;
    if(za!=0||zb!=0) ans++;
    cout<<ans;
}
