#include<bits/stdc++.h>
using namespace std;
bool f[1000005];
int tot[1000003];
int main()
{
    memset(f,true,sizeof(f));
    for(int i=2;i<=1000;i++)
    {
        if (f[i])
        {      
            for(int j=i+i;j<=1000000;j=j+i)
            {
                f[j]=false;
            }
        }
    }
    for(int i=2;i<=1000000;i++)
    {
        if(f[i])
        {
            tot[i]=tot[i-1]+1;
        }
        else tot[i]=tot[i-1];
    }
    int in;
    while(cin>>in) cout<<tot[in]<<endl;
}