#include <iostream>
using namespace std;


int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long int s[n],count=0,i=0,index=100;
		for(int i=0;i<n;i++){
		cin>>s[i];
		}
		while(index!=-1){
			if(s[i]!=0){
				s[i]--;
				count++;
			}else{
				//cout<<"j="<<j;
				index=i-1;
				i=-1;
			}
			//cout<<s[i]<<" ";
			i=(i+1)%n;
		}
		cout<<count<<endl;
		}
	}
