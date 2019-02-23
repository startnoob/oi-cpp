#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,hh,mm,s=0;
    cin>>x>>hh>>mm;
    while(1)
    {
        if(hh%10==7||mm%10==7)
        {
            cout<<s;
            break;
        }
        s++;
        mm-=x;
        while(mm<0)
        {
            mm+=60;
            hh--;
        }
        while(hh<0)
            hh+=24;
    }
    return 0;
}
