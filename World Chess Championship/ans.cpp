#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,x;
	cin>>t;
	while(t--)
	{
	   string s;
	   cin>>x;
	   cin>>s;
	   int cp=0,np=0;
	   for(char c:s)
	   {
	       if(c=='C')
	       {
	          cp+=2; 
	       }
	       else if(c=='N')
	       {
	           np+=2;
	       }
	       else
	       {
	           cp+=1;
	           np+=1;
	       }
	   }
	   if(cp>np)
	   {
	       cout<<x*60<<endl;
	   }
	   else if(cp<np) cout<<x*40<<endl;
	   else cout<<x*55<<endl;
	    
	}
	
}
