#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t,len,last,ones;
	char digit;
	cin >> t;
	string s, c;
	cin.ignore();//clear buffer
	while(t-- > 0){
	   getline(cin,s);
	   len = s.length();
	   last = len - 1;
	   if(s[last] != '9'){
	      ones = s[last] - '0';
	      ones++;
	      digit = (char)(ones + '0');//the operation converts the int into char
	      s[last] = digit;
	   }
	   else{
	       int i;
	       for(i = last;i > -1;i--){
	           if(s[i] != '9'){
	               ones = s[i] - '0';
	             ones++;
	             digit = (char)(ones + '0');
	             s[i] = digit;
	             break;
	           }
	           s[i] = '0';
	       }
	       if(i == -1){
	          cout <<"1";
	          cout <<s<<endl;
	          continue;
	       }
	   }
	   cout <<s<<endl;
	}
    
}