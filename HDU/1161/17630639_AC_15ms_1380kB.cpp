/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月05日 星期六 16时15分12秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    while(getline(cin,s))
    {
        int len=s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
        cout<<s<<endl;
    }
}
