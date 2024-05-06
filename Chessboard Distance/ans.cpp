#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int x=abs(c-a);
	    int y=abs(d-b);
	    int dist=max(x,y);
	    cout<<dist<<endl;
	}
	return 0;
}
