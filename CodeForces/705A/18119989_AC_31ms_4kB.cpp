/*************************************************************************
        > File Name: dskfa.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2019年02月03日 星期日 16时33分54秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string a="I hate ",b="that ",c="I love ";
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i!=n)
        {
            if(i%2==1) cout<<a<<b;
            else cout<<c<<b;
        }
        else{
            if(i%2==1) cout<<a<<"it";
            else cout<<c<<"it";
        }
    }
}