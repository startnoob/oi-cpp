#include<bits/stdc++.h>
int a,d;
char b,c;
int main()
{
    scanf("%d",&a);
    while((b=getchar())=='\n');
    c=b;
    while(--a)
    {
        d+=((b=getchar())==c);
        c=b;
    }
    printf("%d",d);
}
