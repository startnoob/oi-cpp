#include<bits/stdc++.h>
int main()
{
    int n;
    char a[4][100],b[4][100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int tot=0;
        for(int j=1;j<=4;j++) scanf("%s",a[j]);
        for(int j=1;j<=4;j++)
        {
            scanf("%s",b[j]);
            for(int k=1;k<=4;k++)
            {
                if(strcmp(a[k],b[j])==0) tot++;
            }
        }
        if(tot>=2) printf("similar\n");
        else printf("dissimilar\n");
    }
    return 0;
}