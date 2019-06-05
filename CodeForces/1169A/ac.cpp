/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月29日 星期三 14时04分17秒
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
int n,a,x,b,y;
int main()
{
    cin>>n>>a>>x>>b>>y;
    a--,x--,b--,y--;
    while(1)
    {
        if(a==x||b==y) break;
        a=(a+1)%n;
        if(b-1<0) b=n-1;
        else b-=1;
        if(a==b)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
