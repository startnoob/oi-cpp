#include<bits/stdc++.h>
using namespace std;
const int maxn=100000+1000;
int s[maxn];
int a[maxn];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        char temp;
        getchar();
        for(int i=0; i<n; i++)
        {
            scanf("%c",&temp);
            s[i]=temp-'0';
        }
        int cur=1;
        int ans=0;
        int cnt=s[0];
        if(k!=1)
        {
            for(int i=1; i<n; i++)
            {
                if(s[i]==cnt)
                {
                    cur++;
                }
                else
                {
                    cur=1;
                    cnt=s[i];
                }
                if(cur==k+1&&i<n-1&&s[i+1]==cnt)
                {
                    s[i]=!s[i];
                    cur=0;
                    ans++;
                }
                if(cur==k+1&&i<n-1&&s[i+1]!=cnt)
                {
                    ans++;
                    s[i-1]=!s[i-1];
                    cur=1;
                }
                if(cur==k+1&&i==n-1)
                {
                    ans++;
                    s[i]=!s[i];
                }
            }
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(s[i]!=(!s[i-1]))
                {
                    ans++;
                    s[i]=!s[i-1];
                }
            }
        }
        if(n-ans>=ans)
        {
        printf("%d\n",ans);
        for(int i=0; i<n; i++)
            printf("%d",s[i]);
        printf("\n");
        }
        else
        {
            printf("%d\n",n-ans);
            for(int i=0;i<n;i++)
            printf("%d",!s[i]);
            printf("\n");
        }
    }
    return 0;
}