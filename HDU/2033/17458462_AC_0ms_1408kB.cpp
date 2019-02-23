/*************************************************************************
        > File Name: 2033.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2018年12月15日 星期六 14时52分37秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f;
        scanf("%d%d%d",&a,&b,&c);
        scanf("%d%d%d",&d,&e,&f);
        a+=d,b+=e,c+=f;
        b+=c/60,c%=60;
        a+=b/60,b%=60;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}