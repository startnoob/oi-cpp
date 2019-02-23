/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 18时24分06秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[4]={0};
    for(int i=0;i<3;i++) cin>>s[i];
    sort(s,s+3);
    cout<<s[2]-s[0];
}
