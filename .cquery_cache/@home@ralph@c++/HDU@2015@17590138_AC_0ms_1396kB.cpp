#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,i;
    while(cin>>a>>b&&1!=0&&b!=0)
    {
        s=0;
        for(i=1; i<=a; i++)
        {
            s+=2*i;
            if(i%b==0)
            {
                cout<<s/b;
                if(i==a)
                    cout<<endl;
                if(i!=a)
                    cout<<" ";
                s=0;
            }
            if(i%b!=0&&i==a)
            {
                cout<<s/(i%b)<<endl;
            }
        }
    }
    return 0;
}
