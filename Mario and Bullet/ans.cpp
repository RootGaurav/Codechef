#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    int ans=z-(y/x);
	    if(ans<0) cout<<0<<endl;
	    else cout<<ans<<endl;
	    
	}
	
}
