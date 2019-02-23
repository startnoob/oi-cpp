/*************************************************************************
	> File Name: qq.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 21时08分50秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[12];
int main()
{
    for(int i=0;i<10;i++) cin>>s[i];
    sort(s,s+10);
    printf("%d\n%d\n%d\n",s[9],s[8],s[7]);
}
