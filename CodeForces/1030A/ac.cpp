/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月25日 星期六 13时45分51秒
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
    int n;
    cin>>n;
    fo(i,1,n,1)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}
