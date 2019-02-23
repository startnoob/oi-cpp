#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char a[200];
    int len,i;
 
    while(gets(a))
    {
        len=strlen(a);
        if(a[0]!=' ')
        {
            if(a[0]>='a'&&a[0]<='z')
            {
                a[0]=a[0]-32;
            }
        }
        for(i=1; i<len; i++)
        {
 
            if(a[i]>='a'&&a[i]<='z'&&a[i-1]==' ')
                a[i]=a[i]-32;
        }
        cout<<a<<endl;
    }
    return 0;
}
