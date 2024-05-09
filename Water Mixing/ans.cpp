#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,temp,desit,hot,cold;
	cin>>t;
	while(t--)
	{
	    cin>>temp>>desit>>hot>>cold;
	    if(desit==temp) cout<<"YES"<<endl;
	    else if(desit>temp)
	    {
	        if(temp+hot >= desit) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else
	    {
	        if(temp-cold <= desit) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    
	}
	
}
