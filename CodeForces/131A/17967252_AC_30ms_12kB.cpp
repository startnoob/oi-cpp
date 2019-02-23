#include<bits/stdc++.h>
using namespace std;
char s[1000];
int main()
{
    cin>>s;
    int len=strlen(s),xiao=0;
    for(int i=1;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z') xiao++;
    }
    if(xiao==0)
    {
        for(int i=0;i<len;i++)
        {
            if(s[i]>='a'&&s[i]<='z') s[i]-=32;
            else if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
    }
    cout<<s;
}