#include<bits/stdc++.h>
int main()
{
	int a,i,n;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		a=n;
		for(i=2;i<=n;i++)
			a=a*n%9;
		if(a==0)
			printf("9\n");
		else
		printf("%d\n",a);
	}
	return 0;
}