#include<iostream>
using namespace std;
const int mod=1000000007;
int T,ans;
string s;
int main()
{
    cin>>T;
    while(T--){
        ans=1;
        cin>>s;
        for(int i=0;i<s.size();++i){
            if(i&1){
                if(s[i]=='l')ans=(ans*2-1)%mod;
                else ans=(ans*2+1)%mod;
            }else{
                if(s[i]=='l')ans=ans*2%mod;
                else ans=(ans*2+2)%mod;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}