/*************************************************************************
	> File Name: 263b.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月29日 星期二 22时20分53秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[100000];
int main()
{
    int t,tar;
    cin>>t>>tar;
    for(int i=0;i<t;i++) cin>>s[i];
    sort(s,s+t,greater<int>());
//    for(int i=0;i<t;i++) cout<<s[i]<<" ";
    cout<<endl;
    if(tar>t) cout<<"-1";
    else cout<<s[tar-1]<<" "<<s[tar-1];
}
