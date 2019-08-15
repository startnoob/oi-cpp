/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 26 Apr 2019 10:36:56 PM CST
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
int a,cnt;
map<int,bool> mark;
int main()
{
    cin>>a;
    mark[a]=1;
    while(1)
    {
        a++;
        while(a%10==0)
        {
            a/=10;
        }
        //cout<<a<<endl;
        if(mark[a]==0)
        {
            cnt++;
            mark[a]=1;
        }
        else break;
    }
    cout<<cnt+1;
}
