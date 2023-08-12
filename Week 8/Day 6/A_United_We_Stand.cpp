#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin >> t;
    while (t--) {
        ll int n;
        cin >> n;
        int a[n];
        bool pos = false;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int mx=a[n-1];
        int c=0;
        for (int i = 0; i < n-1; i++) {
            if(a[i]%mx!=0 && a[i]!=mx){
                 c++;
                continue;
               
            }
            if(a[i]%mx==0 ){
                pos= true;
                break;
            }
        }
        if(pos){
            cout<<-1<<endl;
        }
        else{
        cout<<n-1<<" "<<1<<endl;
        for(int i = 0 ; i < c;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i = n-1 ; i>=c;i--){
        cout<<a[i]<<" ";
        }
        cout<<endl;
        }


        // Check if the vectors have different sizes
        
    }
}
