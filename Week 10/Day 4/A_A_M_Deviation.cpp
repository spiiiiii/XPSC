#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        int sum= a+b+c;
        if(sum%3==0) cout<<0<<endl;
        else{
            cout<<1<<endl;
        }
    }
}