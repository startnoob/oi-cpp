/*************************************************************************
	> File Name: 938a.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月29日 星期二 22时17分38秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[10000];
bool check(char in)
{
    if(in=='a') return 1;
    else if(in=='e') return 1;
    else if(in=='i') return 1;
    else if(in=='o') return 1;
    else if(in=='u') return 1;
    else if(in=='y') return 1;
    else return 0;
}
int main()
{
    int len;
    cin>>len>>s;
    for(int i=0; i<len-1; i++)
    {
        if(check(s[i])&&check(s[i+1]))
        {
            for(int j=i+1;j<len;j++)
            {
                if(check(s[j])) s[j]=1;
                else break;
            }
        }
    }
    for(int i=0;i<len;i++) if(s[i]!=1) cout<<s[i];
}
