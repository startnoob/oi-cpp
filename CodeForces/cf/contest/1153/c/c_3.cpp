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
    int num_q=0,numm1=0;
    for(int i=0;i<t-2;i++)
    {
        if(s[i]=='?') num_q++;
        if(s[i]=='(') numm1++;
        if(s[i]==')') numm1--;
    }
    if(s[0]==')')
    {
        cout<<":(";
        return 0;
    }
    int val=(1-numm1);
    bool st;
    fo(i,0,t-2,1)
    {
        if(val<0) st=false;
        else st=true;
        //cout<<val<<endl;
        if(st==false&&s[i]=='?') s[i]=')',val++;
        if(st==true&&s[i]=='?') s[i]='(',val--;
        //puts(s);
    }
    if(s[t-1]=='?'&&s[t-1]==')') s[t-1]=')',val--;
    if(s[t-1]=='(')
       {
           cout<<":(";
           return 0;
       }
    if(val==0) puts(s);
    else cout<<":(";
}
