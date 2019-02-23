/*************************************************************************
	> File Name: adfa.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月02日 星期六 08时23分50秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt=0,ji=0,minx=99999999999;
int main()
{
   
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cnt+=a;
        if(a%2==1)
        {
            ji++;
            minx=min(minx,a);
        }
    }
    if(ji%2==1) cnt-=minx;
    cout<<cnt;
}
