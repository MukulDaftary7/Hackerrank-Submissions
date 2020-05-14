#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
ll int gcd(ll int a,ll int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
	// C++ implementation to find nCr 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find the nCr 
void nCr(int n, int r) 
{ 

	// p holds the value of n*(n-1)*(n-2)..., 
	// k holds the value of r*(r-1)... 
	long long p = 1, k = 1; 

	// C(n, r) == C(n, n-r), 
	// choosing the smaller value 
	if (n - r < r) 
		r = n - r; 

	if (r != 0) { 
		while (r) { 
			p *= n; 
			k *= r; 

			// gcd of p, k 
			long long m = __gcd(p, k); 

			// dividing by gcd, to simplify product 
			// division by their gcd saves from the overflow 
			p /= m; 
			k /= m; 

			n--; 
			r--; 
		} 

		// k should be simplified to 1 
		// as C(n, r) is a natural number 
		// (denominator should be 1 ) . 
	} 

	else
		p = 1; 

	// if our approach is correct p = ans and k =1 
	cout << p << endl; 
} 



int main() {
	int t,n,k;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    cin>>k;
	    
	    vector <int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int count=0,lastindex=v[k-1];
	    sort(v.begin(),v.end());
	    for(int i=0;i<n;i++){
	        if(v[i]==lastindex)
	        count++;
	    }
	    int no=0;
	    //cout<<count<<"1"<<endl;
	    for(int i=k-1;i<n;i++){
	        if(v[i]==v[i+1])
	        no++;
	    }
		//cout<<j;-
	    nCr(count,no);
	    //cout<<count<<endl;
	}
	}
	
  


