/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月30日 星期日 13时18分56秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[100000];
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        int len=strlen(s);
        char maxn=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]>maxn)
            {
                maxn=s[i];
            }
        }
        for(int i=0;i<len;i++)
        {
            cout<<s[i];
            if(s[i]==maxn) cout<<"(max)";
        }
        cout<<endl;
    }
}
