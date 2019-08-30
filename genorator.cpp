#include<bits/stdc++.h>
using namespace std;
bool arr[100];
signed main()
{
    srand(time(0));
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++) arr[i]=1;
    for(int i=n*n;i>0;i--)
    {
        swap(arr[i],arr[rand()%i+1]);
    }
    for(int i=1;i<=n*n;i++)
    {
        if(i%n==0) printf("%d\n",arr[i]);
        else printf("%d",arr[i]);
    }
}
