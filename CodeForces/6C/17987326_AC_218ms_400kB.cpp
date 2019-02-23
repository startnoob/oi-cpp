#include<bits/stdc++.h>
using namespace std;
int s[100005];
int main()
{
    int n,place1,place2;
    cin>>n;
    place2=n,place1=1;
    for(int i=1;i<=n;i++) cin>>s[i];
    int time1=0,time2=0;
    while(place1<=place2)
    {
        if(time1<=time2)
        {
            time1+=s[place1];
            place1++;
        }
        else
        {
            time2+=s[place2];
            place2--;
        }
    }
    cout<<place1-1<<" "<<n-place2;
}