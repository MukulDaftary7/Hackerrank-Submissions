#include <stdio.h>
#include <iostream> 
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std; 

// Complete the superReducedString function below.
string superReducedString(string s) {

	for(int i=0;i<s.length()-1;i++){
		if(s[i]==s[i+1])
		s.erase(i,2);
		if(s=="")
		break;
		}
		
		if(s != "" && s[0]==s[1]){
		s.erase(0,2);
		}
		return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);
	if(result != "")
   	cout<<result<<endl;
   	else
   	cout<<"Empty String"<<endl;
    
	fout.close();

    return 0;
}

