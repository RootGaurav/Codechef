#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q,s;
	    cin>>p>>q;
	    s = (p+q)%4;
	    
	    switch (s) {
	        case 0:
	        case 1:
	            cout<<"Alice"<<endl;
	            break;
	        case 2:
	        case 3:
	            cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
