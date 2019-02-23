#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double a,xx;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%lf",&a);
		for(int j=0; j<12; j++)
		{
			for(int k=0; k<60; k++)
			{
				double jj=j,kk=k;
				xx=fabs(jj*30-kk*5.5);
				if(xx>180&&xx<360) xx=360-xx;
				if (fabs(xx-a)*120<1)
				{
					if (j<10) printf("0");
					printf("%d:",j);
					if (k<10) printf("0");
					printf("%d\n",k);
				}
			}
		}
	}
	return 0;
}