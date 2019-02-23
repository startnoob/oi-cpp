#include<bits/stdc++.h>
using namespace std;
int s[101];
bool cmp(int a,int b)
{
    return abs(a)>abs(b);
}
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        else
        {
            for(int i=0;i<n;i++)
            {
                cin>>s[i];
            }
            sort(s,s+n,cmp);
            for(int i=0;i<n-1;i++) cout<<s[i]<<" ";
            cout<<s[n-1]<<endl;
        }
    }
}