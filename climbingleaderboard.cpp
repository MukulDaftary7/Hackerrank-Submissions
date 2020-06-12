#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
int ranks=1,vrank;
vector<int> frank;

	
for(int i=0;i<alice.size();i++){
	vrank=rank+1;
	for(int k=scores.size()-1;k>=0;k--){
		
		if(alice[i]<scores[k]){
		break;
		}else if(scores[k]<=alice[i]){
			vrank--;
			if(scores[k]==scores[k-1])
			vrank++;
		}else 
		break;
	}
	frank.push_back(vrank);
}
return frank;
}

int main()
{
	
}

