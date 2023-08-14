#include <iostream>
 
using namespace std;
 
int main()
{
    int t;cin>>t;while(t--){
        int n,sum=0;cin>>n;
        int a[n];
        for(int i =0;i<n;i++) cin>>a[i];
        for(int i =0;i<n;i++){
            sum+=a[i];
        }
        if(sum==n){
            cout<<0<<endl;
        }
        else if (sum<n){
            cout<<1<< endl;
        }
        else{
        cout<<sum-n<<endl;
        }
        
    }
    
 
    return 0;
}