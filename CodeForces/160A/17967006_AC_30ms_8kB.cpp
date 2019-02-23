#include<bits/stdc++.h>
using namespace std;
int a[150];
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int t,sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/2+1;
    sort(a,a+t,cmp);
    int cnt=0,val=0;
    for(int i=0;i<t;i++)
    {
       cnt++;
       val+=a[i];
       if(val>=sum)
       {
           cout<<cnt;
           break;
       }
    }
}