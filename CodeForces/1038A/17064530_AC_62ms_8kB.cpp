/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年11月18日 星期日 09时45分33秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int num[26];
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        char input;
        cin>>input;
        num[input-'A']++;
    }
    sort(num,num+b);
    cout<<num[0]*b;
    return 0;
}
