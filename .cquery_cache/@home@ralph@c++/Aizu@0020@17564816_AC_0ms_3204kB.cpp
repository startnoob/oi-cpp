/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月26日 星期三 19时15分24秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    getline(cin,s);
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
    }
    cout<<s<<endl;
}
