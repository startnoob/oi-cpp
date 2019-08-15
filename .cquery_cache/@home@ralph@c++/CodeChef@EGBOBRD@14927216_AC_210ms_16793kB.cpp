#include<bits/stdc++.h>
using namespace std;
long long t,n,k,a[100010];
int main(){
	scanf("%d",&t);
	for(int s=1;s<=t;s++){
		cin>>n>>k;
		long long x=k,ans=1;
		for(long long i=1;i<=n;i++){
			cin>>a[i];
		}
		for(long long i=1;i<=n;i++){
			if(a[i]>k){
				long long y=(a[i]-k+x-1)/x;
				ans+=y;
				k+=y*x;
			}
			k-=a[i];
			if(k>1)k--;
			else if(k==1) k=0;
			else{
				if(i!=n) k=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
} 