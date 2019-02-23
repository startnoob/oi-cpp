#include<bits/stdc++.h>
using namespace std;
int val,cra;
string s;
int main()
{
        int t;
        cin>>val>>t;
        while(t--)
        {
                cin>>s>>cra;
                if(s=="multiply") val*=cra;
                else if(s=="minus") val-=cra;
                else val+=cra;
        }
        cout<<val;
}