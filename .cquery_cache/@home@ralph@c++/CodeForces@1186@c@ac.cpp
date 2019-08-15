/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
using namespace std;
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
char in1[1000050],in2[1000050];
int main()
{
    ll ans=0;
    scanf("%s%s",in1,in2);
    int len1=strlen(in1);
    int len2=strlen(in2);
    fo(i,0,len1-len2,1)
    {
        ll cnt=0;
        fo(j,i,i+len2-1,1)
        {
            if(in1[j]!=in2[j-i])
            {
                //cout<<"diif "<<j<<endl;
                cnt++;
            }
        }
        if(cnt%2==0) ans++;
        //cout<<cnt<<" "<<ans<<endl;
    }
    printf("%lld",ans);
}
