#include<bits/stdc++.h>
using namespace std;
int n,a[5];
int main()
{
	while(cin>>n){
		int x;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			cin>>x;
			a[x]++;
		}
		int p=0;
		if(a[4]>0){
			p+=a[4];
		}
		if(a[3]>0){
			p+=a[3];
			a[1]-=a[3];
		}
		if(a[2]>0){
			if(a[2]%2==0){
				p+=a[2]/2;
			}else{
				p+=a[2]/2+1;
				a[1]-=2;
			}
		}
		if(a[1]>0){
			if(a[1]%4==0){
				p+=a[1]/4;
			}else{
				p+=a[1]/4;
				p++;
			}
		}
		cout<<p<<endl;
	}
 	return 0;
}