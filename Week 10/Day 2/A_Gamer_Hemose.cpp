#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        ll int n,h;cin>>n>>h;
        ll int c=0;
        vector<ll int>a(n);
        for(int i = 0; i < n ; i++) cin>>a[i];
        sort(begin(a),end(a),greater<>());
        ll sum = a[0]+a[1];
        if(h<=a[0]) cout<<1<<endl;
        else if (h<=sum) cout<<2<<endl;
        else{
            if(h%sum==0) cout<<(h/sum)*2<<endl;
            else{
                ll ans = (h/sum)*2;
                if(h%sum>a[0]) ans+=2;
                else ans++;
                cout<<ans<<endl;
            }
        }
    
        /* code */
    }
    
}