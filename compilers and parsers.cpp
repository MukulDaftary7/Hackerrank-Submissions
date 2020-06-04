#include <iostream>
#include <stack>
using namespace std;

//bool match(char a,char b){
//	if(a=='>' && b=='<')
//	return true;
//	else 
//	return false;
//}

int main(){
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		int n=s.length();
		stack <char> s1;
		int count=0,max=0;
		for(int i=0;i<n;i++){			
			if(s[i]=='<'){
				s1.push(s[i]);
				count++;
			}else{
				if(s1.empty()){
					break;
				}else{
					//count=count+2;
					s1.pop();
					count++;
				}
				}
				if(s1.empty())
				max=count;
		}
		cout<<max<<endl;
	}
}
