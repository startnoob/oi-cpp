#include<bits/stdc++.h>
using namespace std;
int main() {
string s;
int n,i;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>s;
//读入一个字符串
if (s.length()>10) cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
else cout<<s<<endl;
}
return 0;
}