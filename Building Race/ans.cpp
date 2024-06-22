#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a/x>b/y)
	    cout<<"Chefina"<<endl;
	    else if(a/x<b/y)
	    cout<<"Chef"<<endl;
	    else
	    cout<<"Both"<<endl;
	}
	return 0;
}
