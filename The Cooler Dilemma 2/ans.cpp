#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    int a=y/x;
	    if(a*x<y){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<a-1<<endl;
	    }
	}
}
