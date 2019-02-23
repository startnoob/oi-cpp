/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月28日 星期五 02时00分51秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[100];
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        sort(s,s+3);
        for(int i=0;i<2;i++) cout<<s[i]<<" ";
        cout<<s[2]<<endl;
    }
}
