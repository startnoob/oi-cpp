/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 20时28分44秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b=-1,cnt=1;
        cin>>a;
        for(double i=2;i<=a;i++)
        {
            cnt+=b/i;
            b=-b;
        }
        printf("%.2f\n",cnt);
    }
}
