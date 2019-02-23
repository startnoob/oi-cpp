/*************************************************************************
    > File Name: map1.cpp
    > Author: ralph
    > Mail: 1694487365@qq.com
    > Created Time: 2019年01月29日 星期二 18时02分28秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
map<string,long long > s;
string in;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>in;
        if(s[in]==0)
        {
            cout<<"OK"<<endl;
            s[in]++;
        }
        else{
            cout<<in<<s[in]<<endl;
            s[in]++;
        }
    }
}
