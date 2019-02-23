/*************************************************************************
	> File Name: 1093c.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月16日 星期日 15时58分16秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
long long s[int(2e6)],ans[int(2e6)];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n/2; i++)
    {
        cin>>s[i];
        if(i==1)
        {
            ans[1]=0;
            ans[n]=s[i];
        }
        else
        {
            if(s[i]-ans[i-1]>ans[n-i+2])
            {
                ans[i]=s[i]-ans[n-i+2];
                ans[n-i+1]=ans[n-i+2];
            }
            else{
                ans[i]=ans[i-1];
                ans[n-i+1]=s[i]-ans[i];
            }
        }
    }
    for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
}
