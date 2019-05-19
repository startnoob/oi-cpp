#include<bits/stdc++.h>
using namespace std;
long long b[40][40];
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        memset(b,0,sizeof(b));
        b[1][1]=1;
        printf("1\n");
        for(int i=2;i<=t;i++)
        {
            for(int j=1;j<=i;j++)
            {
                b[i][j]=b[i-1][j]+b[i-1][j-1];
                if(i!=j) printf("%lld ",b[i][j]);
                else printf("%lld\n",b[i][j]);
            }
        }
        printf("\n");
    }
}
