#include<bits/stdc++.h>
using namespace std;
struct colour
{
	char c[20];
};
int main()
{
	 int i,j,k,max,mark;
	 int  n;
	 struct colour ball[1001];
	 while(~scanf("%d",&n)&&n)
	 {
		 max=0;
		 getchar();
		for(i=0;i<n;i++)
		{
			scanf("%s",ball[i].c);
		}
		for(i=0;i<n;i++)
		{
			k=0;
			for(j=0;j<n;j++)
				if(strcmp(ball[i].c,ball[j].c)==0)
					k++;
			if(k>max)
			{
				max=k;
				mark=i;
			}
		}
		printf("%s\n",ball[mark].c);
	 }
	return 0;
}