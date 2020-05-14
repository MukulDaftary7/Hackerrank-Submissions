#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// Complete the encryption function below.

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);
	int r,c,length,j=1;
	length = s.length();
	double sqroot=sqrt(length);
	r=floor(sqroot);
	c=ceil(sqroot);
	if(r*c<=length)
	r=ceil(sqroot);
	//cout<<r<<" "<<c;
	vector <vector <char>> vec(r,vector<char>(c,'0'));
	for(int i=0;i<r;i++){
		for(int k=j-1,n=c*(i+1);k<n;k++){
			if(k>s.length()-1)
			break;
			vec[i][k-c*i]=s[k];
			j++;
			}	
		}
		
	for(int j=0;j<c;j++){
		for(int i=0;i<r;i++){
			if(vec[i][j]!='0')
			cout<<vec[i][j];
//			else
//			continue;
		}
		cout<<" ";
	}	

//    string result = encryption(s);

  //  fout << result << "\n";

    //fout.close();

    return 0;
}

