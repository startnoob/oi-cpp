#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    char data[105];
    int n,i,j,flag,flag1,len;
    while(~scanf("%d",&n))
    {
        getchar();
        for(j=1;j<=n;j++)
        {
            gets(data);
            if((data[0]>='a'&&data[0]<='z')||(data[0]>='A'&&data[0]<='Z')||(data[0]=='_'))
            flag=1;
            else
            flag=0;
            len=strlen(data);
            if(len>50)
            flag=0;
            for(i=1;i<len;i++)
            {
                if((data[i]>='a'&&data[i]<='z')||(data[i]>='A'&&data[i]<='Z')||(data[i]=='_')||(data[i]>='0'&&data[i]<='9'))
                flag1=1;
                else
                {
                    flag1=0;break;
                }
            }
        if(flag==1&&flag1==1)
        printf("yes\n");
        else
        printf("no\n");
        }
    }
    return 0;
}