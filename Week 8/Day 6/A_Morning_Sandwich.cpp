#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int sum = b+c;
        if(a<=sum) cout<<(a*2)-1<<endl;
        else if(a>sum) cout<<(sum*2)+1<<endl;
        
        
    }
}