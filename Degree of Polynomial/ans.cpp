#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int ans=0;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++)
	    {cin>>arr[i];
	     if(arr[i]!=0 && i>ans) ans=i;
	    }
	    cout<<ans<<endl;
	    
	}
	
}
