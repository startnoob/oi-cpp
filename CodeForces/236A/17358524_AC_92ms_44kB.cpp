#include<bits/stdc++.h>
using namespace std;
bool a[10000];
char s[10000];
int main()
{
    scanf("%s",s);
    int cnt=0,len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(a[s[i]-'a']==0)
        {
            a[s[i]-'a']=1;
            cnt++;
        }
    }
    if(cnt%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}