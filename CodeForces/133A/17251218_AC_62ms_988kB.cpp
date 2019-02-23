#include<bits/stdc++.h>
using namespace std;
char a[1000000];
int main()
{
    scanf("%s",a);
    int len=strlen(a);
    bool s=false;
    for(int i=0;i<len;i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9') s=true;
    }
    if(s==true) cout<<"YES";
    else cout<<"NO";
}
