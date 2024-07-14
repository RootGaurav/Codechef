#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	cin.ignore();   //to ignore \n after cursor
	while(t--){
	    string s;
	   getline(cin,s);   //to input multiple word including multiple spaces
	   int n=s.size();
	    for(int i=0; i<n; i++){
	        if(i==0 || s[i-1]==' '){
	            s[i]=toupper(s[i]);   //to uppercase the next character after space or current character
	             
	        }else if(isupper(s[i]) && (islower(s[i-1]) || islower(s[i+1]))){
	           s[i]=tolower(s[i]);  // to lowercase the current character
	       }
	    }cout<<s<<endl;
	}
}