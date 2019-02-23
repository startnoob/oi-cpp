/*************************************************************************
	> File Name: 999b.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月29日 星期二 18时34分14秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[1000];
int main()
{
    int t;
    cin>>t;
    scanf("%s",&s[1]);
    for(int i=t;i>=1;i--)
    {
        if(t%i==0)
        {
            for(int j=1;j<=t/i/2;j++)
            {
                swap(s[j],s[t/i-j+1]);
            }
//            printf("%s\n",&s[1]);
        }
    }
    printf("%s",&s[1]);
}
