#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,lead=0,winner=1;
    cin>>n;
    vector<vector<int>> arr(n , vector<int> (2));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        if(i!=0)
        {
            arr[i][0]+=arr[i-1][0];
            arr[i][1]+=arr[i-1][1];
        }
         
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i][0];
    //     cout<<arr[i][1];
         
    // }
    for(int i=0;i<n;i++)
    {
        
        if(abs(arr[i][0] - arr[i][1]) > lead )
        {
            
            lead=abs(arr[i][0] - arr[i][1]);
            if(arr[i][0] > arr[i][1]) winner=1;
            else winner=2;
        }
         
    }
    cout<<winner<<" "<<lead;
	    
	   
	
}
