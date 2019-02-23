#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
        a[1]=1,a[2]=1;
        for(int i=3;i<=20;i++) a[i]=a[i-1]+a[i-2];
        int t;
        cin>>t;
        while(t--)
        {
                int in;
                cin>>in;
                cout<<a[in]<<endl;
        }
        return 0;
}
