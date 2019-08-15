/*************************************************************************
	> File Name: 1037.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月19日 星期三 18时46分59秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t=3;
    while(t--)
    {
        cin>>a;
        if(a<168)
        {
            printf("CRASH %d\n",a);
            return 0;
        }
    }
    cout<<"NO CRASH"<<endl;
}
