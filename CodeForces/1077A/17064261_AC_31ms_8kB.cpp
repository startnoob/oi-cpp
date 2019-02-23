/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年11月18日 星期日 09时45分33秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(c%2==0) cout<<(a*c/2)-(b*c/2)<<endl;
        else cout<<(a-b)*(c/2)+a<<endl;
    }
    return 0;
}
