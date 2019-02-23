/*************************************************************************
	> File Name: bits.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月25日 星期五 19时16分22秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,t;
    char s[10];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        scanf("%s",s);
        if(s[1]=='+') x++;
        if(s[1]=='-') x--;
    }
    cout<<x;
}
