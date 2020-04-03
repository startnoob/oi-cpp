/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Sun 14 Apr 2019 03:07:11 AM CST
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
char s[100000];
int main()
{
    int t;
    scanf("%d",&t);
    scanf("%s",s);
    int cnt=0;
    if(s[0]==')')
    {
        cout<<":(";
        return 0;
    }
    if(s[0]=='?') s[0]=='(',cnt++;
    fo(i,0,t-1,1)
    {
        if(s[i]=='(') cnt++;
        else if(s[i]==')') cnt--;
        else if(s[i]=='?'&&i==t-1) s[i]=')',cnt--;
        else if(s[i]=='?'&&cnt==1) s[i]='(',cnt++;
        else if(s[i]=='?'&&cnt==2) s[i]=')',cnt--;
    }
    if(cnt==0) puts(s);
    cout<<":(";
}
