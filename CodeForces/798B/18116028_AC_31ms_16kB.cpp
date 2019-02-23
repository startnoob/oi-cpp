/*************************************************************************
        > File Name: saf.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2019年02月03日 星期日 09时40分08秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string s[188];
int n,a=0x3f3f3f3f,b,j;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;a=min(b,a),i++)
    {
        for(b=j=0;j<n;j++)
        {
            int c=(s[j]+s[j]).find(s[i]);
            if(c==string::npos) a=-1;
            else b+=c;
        }
    }
    cout<<a;
}
