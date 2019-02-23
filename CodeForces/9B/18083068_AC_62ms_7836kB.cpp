/*************************************************************************
	> File Name: d.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月31日 星期四 17时00分08秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
long long s[1000000]= {10000000000};
int main()
{
    long long n,vb,vs,xu,yu;
    double dis=0x3f3f3f3f;
    int num=0;
    cin>>n>>vb>>vs;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        s[i]=a;
    }
    cin>>xu>>yu;
    for(int i=2; i<=n; i++)
    {
        if(sqrt((s[i]-xu)*(s[i]-xu)+yu*yu)/vs+s[i]*1.00/(vb*1.00)>dis) continue;
        if(sqrt((s[i]-xu)*(s[i]-xu)+yu*yu)/vs+s[i]*1.00/(vb*1.00)<dis)
        {
           // printf("%lf %lf\n",sqrt((s[i]-xu)*(s[i]-xu)+yu*yu)/vs+s[i]*1.00/(vb*1.00),dis);
            dis=sqrt((s[i]-xu)*(s[i]-xu)+yu*yu)/vs+s[i]*1.00/vb;
            num=i;
            continue;
        }
        if(sqrt((s[i]-xu)*(s[i]-xu)+yu*yu)<sqrt((s[num]-xu)*(s[num]-xu)+yu*yu)) num=i;
    }
    cout<<num;
}
