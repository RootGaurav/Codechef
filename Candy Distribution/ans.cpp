#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    int temp = m*2;
    if(n%temp==0)cout<<"Yes\n";
    else cout<<"No\n";
}

int main()
{
    int test;
    cin>>test;
    while(test--)solve();
    return 0;
}
