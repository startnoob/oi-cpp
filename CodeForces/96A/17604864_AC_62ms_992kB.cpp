/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月14日 星期五 19时00分24秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[1000000];
int main()
{
    scanf("%s",s);
    int len=strlen(s);
    bool st;
    for(int i=0; i<len-6; i++)
    {
        st=true;
        for(int j=i+1; j<=i+6; j++)
        {
            //cout<<s[j]<<"*"<<endl;
            if(s[j]!=s[i])
            {
                // cout<<i<<" "<<j<<endl;
                st=false;
                break;
            }
        }
        //cout<<i<<" "<<st<<endl;
        if(st==true)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
