#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int s1=0,s2=0;
	    vector<string> arr(n);
	    for(int i=0;i<n;i++) 
	    {cin>>arr[i];
	    if(arr[i]=="START38") s1++;
	    else s2++;
	    }
	    cout<<s1<<" "<<s2<<endl;
	    
	    
	}
	
}
