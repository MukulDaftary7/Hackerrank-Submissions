#include <iostream>
#include <utility>
#include <vector>
using namespace std;




int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
	vector <pair<int,int>> v;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		v.push_back(make_pair(a[i],b[i]));
	}
	
	//cout<<sum;
	
	//cout<<sum;
	int flag1=0;
	for(int itr=1;itr<=n-1;itr++){
		for(int j=0;j<=(n-itr-1);j++){
			if(v[j].first>v[j+1].first && v[j].second!=v[j+1].second){
				swap(v[j],v[j+1]);
				}
				
//			if(v[j].first>v[j+1].first && v[j].second==v[j+1].second){
//			flag1=1;
//			break;
//			}
		}
//		if(flag1==1)
//		break;
	}
	//cout<<flag1;
	int flag=0,sum=0;
	for(int i=0;i<n-1;i++){
		sum = sum + v[i].second;
		
		if(v[i].first<=v[i+1].first){
			continue;
		}else
		flag=1;
	}
	sum = sum + v[n-1].second;
	if((sum==n || sum==0) && flag==1){
		cout<<"No"<<endl;
	}else if(flag1==1)
		cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;	
}
}
