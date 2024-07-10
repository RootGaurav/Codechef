#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    int matches=log2(n);
	    int totaltime=(matches-1)*(a+b) + a;
	    cout<<totaltime<<endl;
	    
	}
	
}
