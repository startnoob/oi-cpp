/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Mon 25 Mar 2019 08:12:01 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
double ans;
int k,i;
int main()
{
    cin>>k;
    do
    {
        ans+=double(1)/double(++i);
        //cout<<k<<" "<<ans<<endl;
    }while(ans<=k);
    cout<<i;
}

