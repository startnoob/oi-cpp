#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
        cin>>s;
        int len=s.length();
        char a,b;
        cin>>a>>b;
        for(int i=0;i<len;i++)
        {
                if(s[i]==a) s[i]=b;
        }
        cout<<s;
}