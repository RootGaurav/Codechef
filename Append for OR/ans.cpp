#include <iostream>
using namespace std;
#define int long long 

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int arr[x];
	    int ans=0;
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	        ans = ans | arr[i];
	    }
	    if(ans == y) cout<<0<<endl;
	    else{
	    if((ans|y)!=y) cout<<-1<<endl;
	    else cout<<(ans^y)<<endl;;
	    }
	}
	return 0;
}