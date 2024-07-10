#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a1,a2,a3,b1,b2,b3;
	cin>>t;
	while(t--)
	{
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    vector<int> arrra{a1,a2,a3};
	    vector<int> arrrb{b1,b2,b3};
	    int suma=a1+a2+a3-*min_element(arrra.begin(),arrra.end());
	    int sumb=b1+b2+b3-*min_element(arrrb.begin(),arrrb.end());
	    if(suma>sumb) cout<<"Alice"<<endl;
	    else if(sumb>suma) cout<<"Bob"<<endl;
	    else cout<<"Tie"<<endl;

	    
	}
	
}
