/*************************************************************************
	> File Name: line.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月30日 星期三 21时10分37秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool line[1000000];
int ans[1000000];
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int li,ri;
        cin>>li>>ri;
        for(int j=li;j<=ri;j++) line[j]=true;
    }
    for(int i=1;i<=m;i++)
    {
        if(line[i]==false)
        {
            ans[++cnt]=i;
        }
    }
    cout<<cnt<<endl;
    if(cnt!=0)
    {
        for(int i=1;i<=cnt;i++) cout<<ans[i]<<" ";
    }
}
