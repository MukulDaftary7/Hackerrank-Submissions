#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t;
    cin>>n;
    string q;
    map<string,int> phonebook;
    map<string,int> ::iterator itr;
    while(n--){
        cin>>q>>n;
        phonebook.insert(pair<string,int>(q,n));
    }
    //  for(itr=phonebook.begin();itr!=phonebook.end();itr++){
    //  cout<<itr->first;
    //  }
    while(cin>>q){
    //	cin.clear();
        for(itr=phonebook.begin();itr!=phonebook.end();itr++){
            cout<<itr->first;
            // if(q.compare(itr->first)==0)
            // cout<<q<<"="<<itr->second<<endl;
        }

    }
    return 0;
}

