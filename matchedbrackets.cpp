#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;



void nestingdepth(int arr[],int t){
	stack <int> x;
	int max1=0,y,index,prev_max=-1;
	for(int i=0;i<t;i++){
		if(arr[i]==1){
		x.push(arr[i]);
		y=x.size();
		max1=max(max1,y);
		if(max1>prev_max){
			index=i+1;
			prev_max=max1;
		}}
		else{
		x.pop();	
		}
	}
	
	cout<<max1<<" "<<index<<" ";
}

bool match(int a,int b){
	if(a==2 && b==1)
	return true;
	else 
	return false;
}

void maxsequence(int arr[],int n){
		stack <int> s1;
		int count=0,max1=-1,prev_max=-1,index;
		for(int i=0;i<n;i++){
			if(arr[i]==1){
				s1.push(arr[i]);
			}else{
				if(match(arr[i],s1.top())){
					count=count+2;
					s1.pop();
				}
			}
			if(s1.empty()){
						max1=max(max1,count);
						if(max1>prev_max){
							index=i+1-max1+1;
							prev_max=max1;
							}
							count=0;
						}
						
			}
			cout<<max1<<" "<<index<<endl;
		}



int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	nestingdepth(a,n);
	maxsequence(a,n);
	
}
