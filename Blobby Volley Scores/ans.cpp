#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool turn =false;
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            if(!turn && s[i]=='A')
            {a++;
            turn=false;
            }
            if(turn && s[i]=='B')
            {b++;
            turn=true;
            }
            else
            {
                if(s[i]=='A') turn=false;
                else turn=true;
            }
            
            
            
        }
        cout<<a<<" "<<b<<endl;
    }

}
