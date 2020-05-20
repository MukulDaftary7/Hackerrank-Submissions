#include <iostream>
#include <string>
using namespace std;



void convert_to_words(string s) 
{ 
    string single_digits[]={"zero", "one", "two",  
                 "three", "four","five",  
                "six", "seven", "eight", "nine"};
     string  two_digits[] = {"", "ten", "eleven", "twelve",  
                               "thirteen", "fourteen", 
                               "quarter", "sixteen",  
                               "seventeen", "eighteen", "nineteen"};
    string tens_multiple[] = {"", "", "twenty ", "half", "forty ", "fifty ", 
                            "sixty "}; 

    int len = s.length(); // Get number of digits in given number 
      int i=0;
    /* For single digit number */
    if (len == 1) { 
         cout<<single_digits[s[i] - '0']; 
        return; 
    } 
  
    /* Iterate while num is not '\0' */
    while (i!=s.length()) { 
            if (s[i] == '1') { 
                int sum = s[i] - '0' + s[i+1]- '0'; 
                cout<<two_digits[sum]; 
                return; 
            } 
            else if (s[i] == '2' && s[i+1] == '0') { 
                cout<<"twenty"; 
                return; 
            } 
            else{ 
                int j = s[i] - '0'; 
                //printf("%s ", i? tens_multiple[i]: "");
                cout<<tens_multiple[j];  
                if (s[i+1] != '0') 
                   cout<<single_digits[s[i+1] - '0']; 
                   i++;
            }
            i++; 
        } 
          
} 


int main(){
    int h,m,n=15;
 
    while(n--){
   cin>>h>>m;	
    int t=m;
    if(m>30){
        m=60-m;
        h=h+1;
    }
    string m1=to_string(m);
    string h1=to_string(h);
    if(t<=30){
    convert_to_words(m1);
    if(t!=0 && t!=1 && t!=15 && t!=30)
    cout<<" "<<"minutes"<<" "<<"past"<<" ";
    if(t==1)
    cout<<" "<<"minute"<<" "<<"past"<<" "; 
    if(t==15)
    cout<<" "<<"past"<<" ";
    if(t==30)
    cout<<" "<<"past"<<" ";                     
    convert_to_words(h1);
    if(t==0)cout<<" "<<"o'"<<" "<<"clock";
        }else{
    convert_to_words(m1);
    if(t==59)
    cout<<" "<<"minute"<<" "<<"to"<<" ";
    else
    if(t==45)
    cout<<" "<<"to"<<" ";
    else
    cout<<" "<<"minutes"<<" "<<"to"<<" ";                      
    convert_to_words(h1);
        }
}
}
