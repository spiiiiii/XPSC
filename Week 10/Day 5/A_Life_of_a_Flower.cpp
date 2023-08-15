#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int ans =1;
        for(int i = 0 ; i < n ; i++) cin>>a[i];
        for(int i = 0 ; i < n ;i++){
         if(a[i]==0 && a[i+1]==0){
                ans=-1;
                break;
            }
           else if( i>0 && a[i-1]==1 && a[i]==1){
                ans+=5;
            }
            else if(a[i]!=0){
                ans++;
            }
            
        }
        cout<<ans<<endl;
    }
}