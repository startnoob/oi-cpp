/*************************************************************************
	> File Name: judger.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 04:48:14 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
int main()
{
    while(1)
    {
        system("./genorator-B");
        system("cat 1.in");
        cout<<endl;
        system("./B < 1.in > b.ans");
        system("cat b.ans");
        cout<<endl;
        getchar();
    }
}
