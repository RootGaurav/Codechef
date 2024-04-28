#include <iostream>
using namespace std;

int main() {
	// A=T,T=A,C=G, G=C 
	
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n;
	std::cin >>n;
	char s[n];
	for (int i = 0; i < n; i++) {
	    /* code */
	    std::cin >> s[i];
	    
	    if(s[i]=='A')
	        s[i]='T';
	    
	    else if(s[i]=='T')
	        s[i]='A';
	    
	    else if(s[i]=='C')
	        s[i]='G';
	    
	    else
	        s[i]='C';
	  
	}
	
	    for (int i = 0; i < n; i++) {
	        /* code */
	        std::cout << s[i];
	        
	    }
	    std::cout << std::endl;

	
	}
	return 0;
}
