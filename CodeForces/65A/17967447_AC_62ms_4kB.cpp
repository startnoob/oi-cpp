#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(d&&(!c||!a&&b)||a*c*e<b*d*f)	printf("Ron\n");
	else printf("Hermione\n");
	return 0;
}
