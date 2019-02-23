#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt1=0;
    cin>>t;
    while(t--)
    {
        int a,cnt=0;
        for(int i=0;i<3;i++)
        {
            cin>>a;
            if(a==1) cnt++;
        }
        if(cnt>1) cnt1++;
    }
    cout<<cnt1;
}