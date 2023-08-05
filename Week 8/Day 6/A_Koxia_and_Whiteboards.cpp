#include <bits/stdc++.h>
 
#include <algorithm> 
#define ll long long
using namespace std;
 
int main()
{
    int t;cin>>t;while(t--){
   
    
     ll int n,m;cin>>n>>m;
     ll int a[n],b[m];
     for(int i = 0 ; i <n;i++) cin>>a[i];
     for(int i = 0 ; i <m;i++) cin>>b[i];
     
        ll int sum=0;
        for(int i = 0;i<m;i++){
            sort(a,a+n);
           
                a[0]=b[i];
            
                
        }
        for(int i = 0 ; i <n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
     
    
        
    }
}  