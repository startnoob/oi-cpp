#include<bits/stdc++.h>
using namespace std;
char c[100],d[1000000];
bool x[1000000];
struct node
{
	long long c;
	char l;
} t[100];
bool cmp(node x,node y);
int main()
{
	long long z;
	scanf("%lld",&z);
	while(z--)
	{
		memset(t,0,sizeof(t));
		memset(x,0,sizeof(x));
		scanf("%s ",c);
		cin.getline(d,1000000);
		long long len=strlen(d);
		for(long long i=0; i<len; i++)
		{
			if(d[i]>96&&d[i]<123)
			{
				x[i]=0;
				t[d[i]-96].c++;
				t[d[i]-96].l=d[i];
			}
			if(d[i]>64&&d[i]<91)
			{
				x[i]=1;
				t[d[i]-64].c++;
				t[d[i]-64].l=d[i]+32;
			}
		}
		sort(t+1,t+27,cmp);
//		for(int i=1;i<=26;i++) cout<<t[i].l<<" "<<t[i].c<<endl;
		for(long long i=0; i<len; i++) 
		{
			if((d[i]>96&&d[i]<123)||(d[i]>64&&d[i]<91))
			{
				for(long long j=1; j<=26; j++)
				{
					if(t[j].l==d[i]||t[j].l==d[i]+32)
					{
						if(x[i]==0)
						{
							printf("%c",c[26-j]);
							break;
						}
						if(x[i]==1)
						{
							printf("%c",c[26-j]-32);
							break;
						}
					}
				}
			}
			else printf("%c",d[i]);
		}
		printf("\n");
	}
	return 0;
}
bool cmp(node x,node y)
{
	if(x.c==y.c) return x.l>y.l;
	return x.c>y.c;
} 