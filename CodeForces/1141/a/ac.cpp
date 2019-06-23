/*************************************************************************
	> File Name: ac.cpp
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
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
int main()
{
    int n,m,step=0;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<"-1";
        return 0;
    }
    m/=n;
    while(m!=1)
    {
        if(m%2==0) m/=2,step++;
        else if(m%3==0) m/=3,step++;
        else if(m!=1){
            cout<<"-1";
            return 0;
        }
    }
    cout<<step;
}
