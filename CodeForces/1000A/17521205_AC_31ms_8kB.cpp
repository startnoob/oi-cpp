/*************************************************************************
	> File Name: 1000a.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 19时11分49秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
map<string,int> mp1,mp2;
int main()
{
    mp1.clear();
    mp2.clear();
    int n,ans=0;
    string s[105];
    string str;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        mp1[s[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(!mp1[str]) ans++;
        else mp2[str]++;
    }
    for(int i=0; i<n; i++) if(mp2[s[i]]-mp1[s[i]]>0) ans+=mp2[s[i]]-mp1[s[i]],mp2[s[i]]=-1;
    cout<<ans<<endl;
    return 0;
}
