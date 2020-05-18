#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	string s;
	while(q--){
		cin>>s;
		string s1="",s2="";
		for(int i=0;i<s.length();i++){
			s1=s[i];
			s2=to_string(stoi(s1)+1);
			if(s.find(s2))
			cout<<s2<<s1;
		}
		
	}
	
	
}
