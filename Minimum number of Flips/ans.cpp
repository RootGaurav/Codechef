#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int x=0;
	    vector<int> arr(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    if(n%2 !=0) cout<<-1<<endl;
	    else
	    {
	        for(int i:arr) x+=i;
	        
	        if(x==0) cout<<0<<endl;
	        else cout<<abs(x)/2<<endl;
	   
	        
	    }
	    
	}
	
}
