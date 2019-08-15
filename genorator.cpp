#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val1,val2;
}student[10000];
bool cmp(node x,node y)
{
    if(x.val1==y.val1) return x.val2>y.val2;
    return x.val1>y.val1;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&student[i].val1,&student[i].val2);
    }
    for(int i=1;i<=t;i++) printf("%d %d\n",student[i].val1,student[i].val2);
    return 0;
}

