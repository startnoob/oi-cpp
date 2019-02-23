/*************************************************************************
	> File Name: 8.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 21时59分06秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[1000000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(s,0,sizeof(s));
        scanf("%s",s);
        int len=strlen(s),cnt=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]>='0'&&s[i]<='9') cnt++;
        }
        cout<<cnt<<endl;
    }
}
