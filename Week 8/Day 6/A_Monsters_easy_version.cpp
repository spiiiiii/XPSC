#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
 
        ll ans=0;
        ans+=(a[0]-1);
 
        vector<int> b(n);
        b[0]=a[0];
 
        int toPut=2;
        for(int i=1;i<n;i++){
            if(a[i]<toPut){
                b[i]=a[i];
            }
            else{
                b[i]=toPut;
                toPut++;
            }
        }
        for(int i=0;i<n;i++){
            ans+=(a[i]-b[i]);
        }
 
        cout<<ans<<endl;
    }
    return 0;
}