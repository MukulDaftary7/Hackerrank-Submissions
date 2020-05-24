#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


bool compare(pair<int,int> a,pair <int,int> b){
	return (a.first>b.first);
}

int main(){
	int n,k,l,t;
	cin>>n>>k;
	vector <pair<int,int>> v;
	for(int i=0;i<n;i++){
		cin>>l;
		cin>>t;
		v.push_back(make_pair(l,t));
	}
	sort(v.begin(),v.end(),compare);
	int m=0,sum=0;
	for(int i=0;i<n;i++){
		if(v[i].second==0){
			sum=sum+v[i].first;
		}else
		if(m!=k && v[i].second==1){
			sum=sum + v[i].first;
			m++; 
		}else {
			sum = sum - v[i].first;
		}
	}
	cout<<sum<<endl;
 }
