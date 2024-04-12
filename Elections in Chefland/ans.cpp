#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,count;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    count=0;
	    vector<int> voters(n,0);
	    for(int i=0;i<n;i++) cin>>voters[i];
	    
	    for(int i:voters) if(i>=x) count++;
	    cout<<count<<endl;
	}
	
}
