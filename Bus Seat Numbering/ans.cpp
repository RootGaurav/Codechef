#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    if(n<=10) cout<<"Lower Double"<<endl;
	    else if(n<=15) cout<<"Lower Single"<<endl;
	    else if(n<=25)cout<<"Upper Double"<<endl;
	    else cout<<"Upper Single"<<endl;
	    
	}
	
}
