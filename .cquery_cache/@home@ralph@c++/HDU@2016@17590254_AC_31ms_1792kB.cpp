/*************************************************************************
	> File Name: 7.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 21时45分19秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        else
        {
            int s[100000]= {0};
            int a=0x3f3f3f3f,b=0;
            for(int i=1; i<=n; i++)
            {
                cin>>s[i];
                if(a>s[i])
                {
                    a=s[i];
                    b=i;
                }
            }
            swap(s[b],s[1]);
            for(int i=1; i<n; i++) cout<<s[i]<<" ";
            cout<<s[n]<<endl;
        }
    }
}
