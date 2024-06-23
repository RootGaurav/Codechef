#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int x, y, a, b, s=2;
	    cin>>x>>y>>a>>b;
	    
	    if (x==a || x==b) s--;
	    if (y==a || y==b) s--;
	    cout<<s<<endl;
	}
	return 0;
}
