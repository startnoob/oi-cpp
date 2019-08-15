/*************************************************************************
	> File Name: 4.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 20时34分43秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool prime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}
int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==0&&b==0) break;
        else{
            bool st=true;
            for(int i=a;i<=b;i++)
            {
                if(prime(i*i+i+41)==false) st=false; 
            }
            if(st==true) cout<<"OK"<<endl;
            else cout<<"Sorry"<<endl;
        }
    }
}
