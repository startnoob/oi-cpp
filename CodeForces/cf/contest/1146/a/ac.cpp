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
char in[100050];
int main()
{
    cin>>in;
    int len=strlen(in),cnt=0;
    fo(i,0,len-1,1)
    {
        if(in[i]=='a') cnt++;
    }
    //cout<<cnt<<" "<<len<<endl;
    cnt*=2;
    if(cnt>len) cout<<len;
    else cout<<len-(len-cnt)-1;
}
