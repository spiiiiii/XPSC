#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll int t;
    cin >> t;
    while (t--) {
       int n;cin>>n;
       int a[n];
       int sum=0;
       for(int i =0;i < n;i++) cin>>a[i];
       for(int i = 0;i < n ; i++){
        sum+=a[i];

       }
      // cout<<sum<<endl;
       if(sum==n) cout<<0<<endl;
       else if(sum<1) cout<<1<<endl;
       else  cout<<sum-n<<endl;
    }
}