/*************************************************************************
	> File Name: 4.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月28日 星期五 22时24分34秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=90&&n<=100) cout<<"A"<<endl;
        else if(n>=80&&n<=89) cout<<"B"<<endl;
        else if(n>=70&&n<=79) cout<<"C"<<endl;
        else if(n>=60&&n<=69) cout<<"D"<<endl;
        else if(n>=0&&n<=59) cout<<"E"<<endl;
        else cout<<"Score is error!"<<endl;
    }
}
