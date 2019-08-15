/*************************************************************************
	> File Name: zhong.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月18日 星期一 21时54分16秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int n;
    while(1)
    {
        memset(a,0,sizeof(a));
        cin>>n;
        if(n==0) break;
        else
        {
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            sort(a,a+n);
            if(n%2==0) cout<<double((a[n/2]+a[n/2-1])/2)<<endl;
            else cout<<a[n/2]<<endl;
        }
    }
}
