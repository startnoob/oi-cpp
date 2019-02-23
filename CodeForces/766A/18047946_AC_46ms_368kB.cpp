#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main()
{
    cin>>s1>>s2;
    if(s1==s2) cout<<"-1";
    else cout<<max(s2.size(),s1.size());
}