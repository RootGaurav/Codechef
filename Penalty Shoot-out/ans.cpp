#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    if(a==1 && b==4) cout<<"NO"<<endl;
	    else if(a==2 && b==0) cout<<"NO"<<endl;
	    else if(a==3 && b==0) cout<<"NO"<<endl;
	    else if(a==3 && b==1) cout<<"NO"<<endl;
	    else if(a==0 && b==3) cout<<"NO"<<endl;
	    else if(a==0 && b==4) cout<<"NO"<<endl;
	    else cout<<"yes"<<endl;
	    
	}
	
}
