#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    while(n>0)
	    {
	        if(n%2)
	        {
	            count++;
	        }
	        
	            n/=2;
	    }
	    cout<<count-1<<endl;
	    
	}
	return 0;
}