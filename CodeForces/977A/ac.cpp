/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月25日 星期六 13时10分33秒
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
    int n,step;
    cin>>n>>step;
    fo(i,1,step,1)
    {
        if(n%10==0) n/=10;
        else n--;
    }
    cout<<n;
}
