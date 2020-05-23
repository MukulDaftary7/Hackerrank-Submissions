#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
	int t,n,v1;
	cin>>t;
	
	while(t--){
	cin>>n;
	vector <int> s,p(n),v(n);
	for(int i=0;i<n;i++){
		cin>>v1;
		s.push_back(v1+1);
		cin>>p[i];
		cin>>v[i];
	//	cout<<v[i]<<" "<<p[i]<<" "<<s[i]<<endl;
	}
	int min=-1,nop,profit;
	for(int i=0;i<n;i++){
		nop=floor(p[i]/s[i]);
		profit=nop*v[i];
		//cout<<nop<<" "<<profit;
		if(profit>min)
		min=profit;
	}
	cout<<min<<endl;
}
}
