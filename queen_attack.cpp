#include <iostream>
using namespace std;

int board[1000][1000]={0};

int main(){
	int n,k;
	cin>>n>>k;
	
	int r,c;
	cin>>r>>c;
	
	int obstacles[k][2];
	
	for(int i=0;i<k;i++){
		for(int j=0;j<=1;j++){
			cin>>obstacles[i][j];
		}
	}
	
	
	
	
	for(int i=0;i<k;i++){
		int j=0;
		board[obstacles[i][j]-1][obstacles[i][j+1]-1]=1;
	}
	int count=0;
	for(int i=1;i<=8;i++){
		int r_q=r-1,c_q=c-1;
		switch(i){
			case 1:
				for(int i=r_q-1;i>=0;i--){
					int flag=1;
				for(int j=c_q-1;j>=0;j--){
					if(board[i][j]!=1){
						count++;
						c_q=c_q-1;
						break;
					}else{
						flag=0;
						break;
					}
				}
				if(flag==0)
					break;
		}
			break;
			case 2:
				for(int i=r_q-1;i>=0;i--){
					int flag=1;
				for(int j=c_q+1;j<n;j++){
					if(board[i][j]!=1){
						count++;
						c_q=c_q+1;
						break;
					}else{
						flag=0;
						break;
					}
				}
				if(flag==0)
					break;
				}
			break;
			case 3:
				for(int i=r_q+1;i<n;i++){
					int flag=1;
				for(int j=c_q-1;j>=0;j--){
					if(board[i][j]!=1){
						count++;
						c_q=c_q-1;
						break;
					}else{
						flag=0;
						break;
					}
				}
				if(flag==0)
					break;
				}
			break;
			case 4:
				for(int i=r_q+1;i<n;i++){
					int flag=1;
				for(int j=c_q+1;j<n;j++){
					if(board[i][j]!=1){
						count++;
						c_q=c_q+1;
						break;
					}else{
						flag=0;
						break;
					}
				}
				if(flag==0)
					break;
				}
			break;
			case 5:
				for(int i=r_q-1;i>=0;i--){
						if(board[i][c_q]!=1)
						count++;
						else
						break;
				}
				break;
			case 6:
				for(int i=r_q+1;i<n;i++){
						if(board[i][c_q]!=1)
						count++;
						else
						break;
				}
				break;
			case 7:
				for(int j=c_q+1;j<n;j++){
						if(board[r_q][j]!=1)
						count++;
						else
						break;			
				}
				break;
			case 8:
				for(int j=c_q-1 ;j>=0;j--){
						if(board[r_q][j]!=1)
						count++;
						else
						break;			
				}
				break;			
	}
}
cout<<count;
}
