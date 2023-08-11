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
            int cum=sum/n;
            bool pos = false;
            for(int i = 0 ; i < n ;i++){
                if(cum==a[i]){
                    pos = true;
                    break;
                }
            }
            if(pos) {
                cout<<"YEs"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

       }

}