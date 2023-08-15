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
        
        int k = c/2;
            a=a+c-k;
            b=b+k;
            
        
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}