#include <iostream>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c,m;
		cin>>n>>c>>m;
		int choclates=n/c;
		int wrappers=choclates;
		while(wrappers>=m){
			choclates=choclates+wrappers/m;
			wrappers=wrappers%m+wrappers/m;
		}
	cout<<choclates<<endl;	
	}
	
}
