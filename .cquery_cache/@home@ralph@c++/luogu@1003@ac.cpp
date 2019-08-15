/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Wed 27 Mar 2019 01:50:01 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
int ar[M][4];
int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        for(int i=1; i<=4; i++) cin>>ar[k][i];
    }
    int pox,poy;
    cin>>pox>>poy;
    for(int i=t; i>=1; i--)
    {
        if(pox>=ar[i][1]&&pox<=ar[i][3]+ar[i][1]&&poy>=ar[i][2]&&poy<=ar[i][4]+ar[i][2])
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}
