#include <iostream>
using namespace std;

int main() {
	int t,n,left;
	cin>>t;
	while(t--){
	    cin>>n>>left;
	    int right=n;
	    if(left>=right){
	        cout<<n<<endl;
	    }
	    else
	    cout<<right+(right-left)<<endl;
	}
	return 0;
}
