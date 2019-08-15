/*************************************************************************
	> File Name: qq.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 21时08分50秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[4];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<3;i++) cin>>s[i];
        sort(s,s+3);
        if(s[0]*s[0]+s[1]*s[1]==s[2]*s[2]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
