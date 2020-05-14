#include <iostream>
#include <string>
using namespace std;

int main(){
	string initial,desired;
	int no_op,t,count=0,operations;
	getline(cin,initial);
	getline(cin,desired);
	cin>>no_op;
	if(initial.length()>=desired.length())
	t=desired.length();
	else
	t=initial.length();
	
	for(int i=0;i<t;i++){
		if(initial[i]==desired[i])
		count++;
		else
		break;
	}

	operations = (initial.length()-count) + (desired.length()-count);
	if(operations%2==0 && no_op%2==0 && no_op>=operations)
	cout<<"Yes";
	else
	if(operations%2!=0 && no_op%2!=0 && no_op>=operations)
	cout<<"Yes";
	else if(operations==0)
	cout<<"Yes";
	else
	cout<<"No";
	
}

