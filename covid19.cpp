#include <iostream>
#include <vector>
using namespace std;


int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n,left=1,right=1,divide=-1,min;
		cin>>n;
		vector <int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	for(int i=0;i<n-1;i++){
		if(v[i+1]-v[i]<=2)
		left++;
		else{
			divide=i+1;
			break;
		}
	}
	if(divide!=-1){
	for(int i=divide;i<n-1;i++){
		if(v[i+1]-v[i]<=2)
		right++;
	}
}
	if(right==1)
	cout<<left<<" "<<left<<endl;
	else
	if(right==left)
	cout<<"1"<<" "<<left<<endl;
	else
	if(right>left)
	cout<<left<<" "<<right<<endl;
	else
	cout<<right<<" "<<left<<endl;
}}
