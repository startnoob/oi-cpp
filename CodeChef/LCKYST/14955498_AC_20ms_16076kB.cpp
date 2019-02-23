#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		long long x,y,a;
		a=0;
		y=0;
		scanf("%lld",&x);
		while(1){
			y++;
			if(x%10==0){x/=10;continue;}
			if(x%5==0)
				a++,x=x/5;
			else break;
		}
		for(int k=1;k<y;k++)x=(x<<1)+(x<<3);
		if(a%2==1)x<<=1;
		printf("%lld\n",x);
	}
	return 0;
} 