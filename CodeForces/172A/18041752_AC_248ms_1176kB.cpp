/*************************************************************************
	> File Name: 172a.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月29日 星期二 12时20分44秒
 ************************************************************************/
#include<bits/stdc++.h>
using namespace std;
char line[40000][30];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>line[i];
    }
    int len=strlen(line[1]),cnt=0;
    for(int i=0;i<len;i++)
    {
        bool st=true;
        for(int j=2;j<=n;j++)
        {
            if(line[j][i]!=line[1][i])
            {
                st=false;
                break;
            }
        }
        if(st==true) cnt++;
        else break;
    }
    cout<<cnt;
}
