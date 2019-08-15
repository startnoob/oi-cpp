/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月01日 星期五 19时22分05秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int> > s;
int main()
{
    int n,cnt=0,temp=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        s.push(x);
    }
    for(int i=1;i<=n-1;i++)
    {
        temp=0;
        temp+=s.top();
        s.pop();
        temp+=s.top();
        s.pop();
        s.push(temp);
        cnt+=temp;
    }
    printf("%d",cnt);
}
