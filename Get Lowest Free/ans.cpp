#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    int sum=a+b+c;
	    vector<int> arr;
	    arr.push_back(a);
	    arr.push_back(b);
	    arr.push_back(c);
	    int min=*min_element(arr.begin(),arr.end());
	    cout<<sum-min<<endl;
	    
	}
	
}
