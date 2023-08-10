#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;cin>>n;
        int a[n];
        int even=0,odd=0,sum=0;
        for(int i =0;i < n ; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i<n;i++){
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
                sum+=a[i];
            }
        }
        if( odd%2!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}