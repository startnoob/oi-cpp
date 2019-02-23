/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 22时22分14秒
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
            int a[10000]= {0};
            a[1]=1,a[2]=2,a[3]=3;
            if(n<=3) cout<<a[n]<<endl;
            else
            {
                for(int i=4; i<=n; i++)
                {
                    a[i]=a[i-1]+a[i-3];
                }
                cout<<a[n]<<endl;
            }
        }
    }
}
