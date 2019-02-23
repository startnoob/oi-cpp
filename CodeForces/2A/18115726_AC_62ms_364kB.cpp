/*************************************************************************
	> File Name: adfasdf.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月02日 星期六 22时38分09秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string ins[10000];
int in_val[10000],maxn=-1000;
map<string,int > fir,sec;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ins[i]>>in_val[i];
        fir[ins[i]]+=in_val[i];
    }
    for(int i=0;i<n;i++)
    {
        maxn=max(maxn,fir[ins[i]]);
    }
//    cout<<maxn;
    for(int i=0;i<n;i++)
    {
        sec[ins[i]]+=in_val[i];
        if(fir[ins[i]]==maxn&&sec[ins[i]]>=maxn)
        {
            cout<<ins[i];
            return 0;
        }
    }
}
