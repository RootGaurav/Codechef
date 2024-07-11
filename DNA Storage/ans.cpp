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
        // your code goes here
        string ans="";
        for(int i=0;i<s.length();i+=2)
        {
            if(s[i]=='0' && s[i+1]=='0') ans+="A";
            if(s[i]=='0' && s[i+1]=='1') ans+="T";
            if(s[i]=='1' && s[i+1]=='0') ans+="C";
            if(s[i]=='1' && s[i+1]=='1') ans+="G";
        }
        cout<<ans<<endl;
    }

}
