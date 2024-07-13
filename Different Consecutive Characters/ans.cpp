#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,x;
	string s;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n;
	    cin>>s;
	    for(int i=0;i<n-1;i++)
	    {
	        if((s[i]=='0' && s[i+1]=='0') || (s[i]=='1' && s[i+1]=='1') ) count++;
	    }
	    cout<<count<<endl;
	    
	}
	
}
