/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月30日 星期日 22时05分54秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[100000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%s",s);
        bool st=false;
        int cnt=0,last=0,len=strlen(s);
        for(int i=0;i<len;i++)
        {
            if(s[i]=='X') last=0;
            if(s[i]=='O')
            {
                cnt+=++last;
            }
        }
        cout<<cnt<<endl;
    }
}
