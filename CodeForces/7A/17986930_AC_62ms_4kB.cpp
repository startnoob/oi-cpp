#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int a=0, b=10,ans;
    for(int i=0; i<8; i++)
    {
        scanf("%s", s);
        int cnt=0;
        for(int j=0; j<8; j++) if(s[j]=='B') cnt++;
        if(cnt==8) a++;
        b=min(b, cnt);
    }
    ans=a+b;
    if(a==8) ans=8;
    printf("%d", ans);
    return 0;
}