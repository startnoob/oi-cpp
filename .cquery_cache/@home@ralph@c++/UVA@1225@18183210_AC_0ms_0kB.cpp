/*************************************************************************
	> File Name: 13123.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月10日 星期日 21时57分46秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
//    freopen("zero.out","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        s.clear();
        int a;
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            s+=to_string(i);
        }
        int tot[12]={0},len=s.length();
        for(int i=0;i<len;i++)
        {
            tot[s[i]-'0']++;
        }
        for(int i=0;i<9;i++) cout<<tot[i]<<" ";
        cout<<tot[9]<<endl;
    }
}
