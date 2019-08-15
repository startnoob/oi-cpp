#include<stdio.h>
main()
{
	int wuyiqi,i;
	scanf("%d",&wuyiqi);
	while(wuyiqi--)
	{
		int n,m,a[1001];
		scanf("%d%d",&n,&m);
		int max=0,tot=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max) max=a[i];
			tot+=a[i];
		}
		tot=max*n-tot;
		if((m-tot)%n==0) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}