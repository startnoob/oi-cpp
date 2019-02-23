#include<bits/stdc++.h>
using namespace std;
int s,v1,v2,t1,t2,tot1,tot2;
int main()
{
        cin>>s>>v1>>v2>>t1>>t2;
        if(s*v1+2*t1<s*v2+2*t2) cout<<"First";
        else if(s*v1+2*t1==s*v2+2*t2) cout<<"Friendship";
        else cout<<"Second";
        return 0;
}