/*************************************************************************
	> File Name: gen.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月11日 星期六 17时20分01秒
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
    freopen("./1.in","w",stdout);
    srand(time(0));
    int a=5000,b=rand()%(100000*5000)+1;
    cout<<a<<" "<<b<<endl;
    for(int i=1;i<=5000;i++) cout<<rand()%100000+1<<" ";
}
