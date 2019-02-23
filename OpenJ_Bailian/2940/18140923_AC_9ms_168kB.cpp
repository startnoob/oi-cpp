#include<bits/stdc++.h>
using namespace std;
int sum,a,n;
int main()
{
        cin>>a>>n;
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=i;j++)
                {
                        sum+=a*pow(10,j-1);
                }
        }
        cout<<sum;
}