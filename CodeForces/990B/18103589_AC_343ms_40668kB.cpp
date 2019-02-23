/*************************************************************************
    > File Name: sdasd.cpp
    > Author: ralph
    > Mail: 1694487365@qq.com
    > Created Time: 2019年02月02日 星期六 09时11分57秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[10000000];//md,小了
vector<int> b;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>s[i];
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        while(b.empty()==false&&s[i]>b.back()&&s[i]<=b.back()+k)
        {
            b.pop_back();
        }
        b.push_back(s[i]);
    }
    cout<<b.size();
}
