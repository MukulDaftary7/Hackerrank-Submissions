#include <iostream>
#include <string>
using namespace std;

int main(){
	long int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n>>s;
		long int nop=n,ra=n,rb=n,ca=0,cb=0;	
		for(long int i=0;i<s.length();i=i+2){
			n--;
			if(s[i]=='1')
			ca++;
			ra--;
			if(ca-cb>rb || cb-ca>ra){
			cout<<i+1<<endl;
			break;
			}
//			if(b>n && abs(a-b)>n || a>n+1 && abs(a-b)>n+1){
//			cout<<i+1<<endl;
//			break;}
			if(s[i+1]=='1')
			cb++;
			rb--;
		if(abs(ca-cb)>n){
			cout<<2*(nop-n)<<endl;
			break;
			}
			if(ca==cb && n==0)
			cout<<2*nop<<endl;
		}
}}
