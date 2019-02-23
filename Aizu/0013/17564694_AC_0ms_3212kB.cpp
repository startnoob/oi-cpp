/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月26日 星期三 18时55分21秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main()
{
    int input;
    while(scanf("%d",&input)!=EOF)
    {
        if(input!=0) s.push(input);
        else{
            printf("%d\n",s.top());
            s.pop();
        }
    }
}
