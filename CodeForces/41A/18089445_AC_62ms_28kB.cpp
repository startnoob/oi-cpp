/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月28日 星期一 13时34分21秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s1[10000],s2[10000];
int main()
{
    scanf("%s%s",s1,s2);
    int len1=strlen(s1),len2=strlen(s2);
    if(len1!=len2)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<len1;i++)
    {
        if(s1[i]!=s2[len2-1-i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}