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
int s[150];
int main()
{
    int n,cnt_0=0;
    cin>>n;
    fo(i,1,n,1)
    {
        scanf("%1d",&s[i]);
        if(s[i]==0) cnt_0++;
        else cnt_0--;
    }
    if(cnt_0!=0)
    {
        cout<<"1"<<endl;
        fo(i,1,n,1) cout<<s[i];
    }
    else
    {
        cout<<"2"<<endl<<s[1]<<" ";
        fo(i,2,n,1) cout<<s[i];
    }
}
