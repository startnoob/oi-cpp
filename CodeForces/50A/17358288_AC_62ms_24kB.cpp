#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n%2==0) cout<<(n/2)*m;
    else cout<<(n/2)*m+m/2;
}