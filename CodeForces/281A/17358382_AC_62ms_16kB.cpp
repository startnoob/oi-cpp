#include<bits/stdc++.h>
using namespace std;
char s[10000];
int main()
{
    scanf("%s",s);
    if(s[0]<='Z') printf("%s",s);
    else
    {
        s[0]+='A'-'a';
        printf("%s",s);
    }
}