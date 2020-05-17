#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

// Complete the kaprekarNumbers function below.
//void kaprekarNumbers(int p, int q) {
//
//}

int main()
{
    long int p;
    cin >> p;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long int q;
    cin >> q;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    vector <int> v;
    vector <int> kno;
    string l,r;
for(long long int i=p;i<=q;i++){
    //cout<<i<<"";
	int digit;
    long long int square;
    int t=i;
    //cout<<t<<" ";
    while(t!=0){
        v.push_back(t%10);
        t=t/10;
    }
    digit=v.size();
    //cout<<"digit="<<digit<<endl;
    square=i*i;
    //cout<<"square="<<square<<endl;
    string s=to_string(square);
    //cout<<s<<endl;
    if(s.length()==1)
    l="0";
    else
    l=s.substr(0,s.length()-digit);
    //cout<<"l="<<l<<endl;
    r=s.substr(s.length()-digit,digit);
    //cout<<"r="<<r<<endl;
      int sum=stoi(l)+stoi(r);
    // cout<<sum<<endl;
    if(i==sum)
    kno.push_back(sum);
    v.clear();
}

    if(kno.size()==0)
    cout<<"INVALID RANGE"<<endl;
    else{
        for(int i=0;i<kno.size();i++)
        cout<<kno[i]<<" ";
    }
    
//    kaprekarNumbers(p, q);

    return 0;
}

