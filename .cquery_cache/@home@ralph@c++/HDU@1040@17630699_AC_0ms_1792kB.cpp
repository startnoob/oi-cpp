/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月05日 星期六 16时15分12秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int l[100000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(l,0,sizeof(l));
        int tt;
        cin>>tt;
        for(int i=0;i<tt;i++) cin>>l[i];
        sort(l,l+tt);
        for(int i=0;i<tt-1;i++) cout<<l[i]<<" ";
        cout<<l[tt-1]<<endl;
    }
}
