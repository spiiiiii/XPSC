#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n];
        int sum=0;
        for(int i = 0 ; i < n ;i++) {
            cin>>a[i];
            sum+=a[i];
            }
           // cout<<sum<<endl;
          //  int cum=sum/n;
           // cout<<cum<<endl;
            bool pos = false;
            for(int i = 0 ; i < n ;i++){
                if(a[i]*n==sum){
                    pos = true;
                    break;
                }
            }
            if(pos) {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

       }

}