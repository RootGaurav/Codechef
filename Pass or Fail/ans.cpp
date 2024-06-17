#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,p,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>p;
	    int sum=(x*3)+((n-x)*-1);
	    if(sum>=p)
	    {
	        cout<<"PASS"<<endl;
	    }
	    else cout<<"FAIL"<<endl;
	    }
	
}
